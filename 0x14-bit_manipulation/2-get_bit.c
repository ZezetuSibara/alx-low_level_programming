
#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @y: number to be searched
 * @index: index of the bit
 * Return: value of the bit using the index
 */
int get_bit(unsigned long int y, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (y >> index) & 1;

	return (bit_val);
}
