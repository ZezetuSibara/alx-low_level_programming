#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: Represents a character to be printed
 * Return: 1, if successful.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
