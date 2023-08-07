#include "main.h"
/**
 * append_text_to_file - This code appends text
 *at the end of a filewithout overwrite.
 * @filename: This is Pointer to the name of the file.
 * @text_content: String that will added to the end of the file.
 * Return: (-1) if the function fails or filename is NULL -
 *         (-1) if the file does not exist the user lacks write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	wr = write(y, text_content, length);

	if (y == -1 || wr == -1)
		return (-1);

	close(y);
	return (1);
}
