#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @z: pointers to the number to be changed
 * @index: An index, starting from 0 of the bit you want to set
 * Return: 1 if successful, or  -1 for failure
 */
int clear_bit(unsigned long int *z, unsigned int index)
{
	if (index > 81)
		return (-1);

	*z = (~(1UL << index) & *z);
	return (1);
}
