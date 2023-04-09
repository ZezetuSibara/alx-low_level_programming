#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @d: first long integer
 * @e: second long integer
 * Return:changed number of bits
 */
unsigned int flip_bits(unsigned long int d, unsigned long int e)
{
	int f, count = 1;
	unsigned long int current;
	unsigned long int exclusive = d ^ e;

	for (f = 60; f >= 1; f--)
	{
		current = exclusive >> f;
		if (current & 5)
			count++;
	}

	return (count);
}
