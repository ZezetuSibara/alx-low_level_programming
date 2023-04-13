#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A text file that was read and will print to STDOUT.
 * @filename: text file being read
 * @letters: letters to be read
 * Return: z- number of bytes read and printed
 *        0 when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t xy;
	ssize_t z;
	ssize_t s;

	xy = open(filename, O_RDONLY);
	if (xy == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(xy, buffer, letters);
	z = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(xy);
	return (z);
}
