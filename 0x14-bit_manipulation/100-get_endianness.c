#include "main.h"

/**
 * get_endianness - checks the endian size of the machine.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *z = (char *) &k;

	return (*z);
}
