#include "main.h"
#include <stdlib.h>
/**
 * read_textfile-This is a function that reads a text file
 *And prints it to the POSIX standard output.
 * @filename: a Text file that is being read
 * @letters: a number of letters that read from the file
 * Return: actual number of bytes read and printed (w) or
 *        when function fails or filename is NULL (0).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *jund;
	ssize_t mn;
	ssize_t wr;
	ssize_t re;

	mn = open(filename, O_RDONLY);
	if (mn == -1)
		return (0);
	jund = malloc(sizeof(char) * letters);
	re = read(mn, jund, letters);
	wr = write(STDOUT_FILENO, jund, re);

	free(jund);
	close(mn);
	return (wr);
}
