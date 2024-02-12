#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer -This code allocates 1024 bytes for acreated buffer.
 * @file: this is the name of the file that buffer is storing chars for.
 * Return:The pointer to the newly-allocated buffers.
 */
char *create_buffer(char *file)
{
	char *myfile;

	myfile = malloc(sizeof(char) * 1024);

	if (myfile == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (myfile);
}
/**
 * close_file -This code Closes file descriptors.
 * @fd: This is the file descriptor to be closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - This code copies the contents of a file to another file.
 * @argc: This is the number of arguments supplied to the program at a time.
 * @argv: array of pointers to the arguments.
 * Return: on success (0)
 * Description: 97 exit code if the argument count is incorrect
 *98 exit code If file_from does not exist or cannot be read
 *99 exit code If file_to cannot be created or written to
 *100 exit code If file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int frst, tothis, rd, wr;
	char *myfile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	myfile = create_buffer(argv[2]);
	frst = open(argv[1], O_RDONLY);
	rd = read(frst, myfile, 1024);
	tothis = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frst == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(myfile);
			exit(98);
		}

		wr = write(tothis, myfile, rd);
		if (tothis == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(myfile);
			exit(99);
		}

		rd = read(frst, myfile, 1024);
		tothis = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(myfile);
	close_file(frst);
	close_file(tothis);
	return (0);
}

