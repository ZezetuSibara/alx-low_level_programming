#include <stdio.h>

/**
 * _strlen - Returns a length of a string.
 * @str: The string to get the length of
 * Return: The length of a @str.
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
