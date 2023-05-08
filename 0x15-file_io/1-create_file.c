#include "main.h"

/**
 * create_file - used to Create a file.
 * @filename: Points to the file to be created.
 * @text_content: Points what to be written into the file.
 * Return: If the function fails - -1.
 *         Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int xy, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	xy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(xy, text_content, len);

	if (xy == -1 || z == -1)
		return (-1);

	close(xy);

	return (1);
}
