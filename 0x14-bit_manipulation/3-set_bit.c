#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @x: points to the number that will change
 * @index: index set to 1
 * Return: 1 if successful, otherwise return -1
 */
int set_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = ((1UL << index) | *x);
	return (1);
}
