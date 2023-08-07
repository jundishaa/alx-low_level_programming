#include "main.h"
/**
 * create_file -a function that  Creates a new file.
 * @filename: Pointer to the name of the file intended to create.
 * @text_content: Pointer to a string that is to write to the file.
 * Return: -1 (If the function fails) -
 *         1 (Otherwise)
 */
int create_file(const char *filename, char *text_content)
{
	int my, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	my = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(my, text_content, length);

	if (my == -1 || wr == -1)
		return (-1);

	close(my);
	return (1);
}
