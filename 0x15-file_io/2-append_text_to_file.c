#include "main.h"

/**
 * append_text_to_file - Appends the file text at the end.
 * @filename: A pointer of the file name.
 * @text_content: The string to be added at the end of the file.
 * Return: 1 on success and -1 on failure.
 *         If filename is NULL return -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, length);

	if (p == -1 || q == -1)
		return (-1);

	close(p);

	return (1);
}
