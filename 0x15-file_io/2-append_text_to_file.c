#include "main.h"

/**
 * append_text_to_file - Used to append the file text.
 * @filename: Points to the file name.
 * @text_content: The string to be added end of the file.
 * Return: 1 if successful and -1 if fails.
 *         If NULL return -1.
 *         If the user lacks write permissions - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, len);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}
