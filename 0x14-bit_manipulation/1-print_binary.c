#include "main.h"

/**
 * print_binary - prints the binary converted from a decimal number
 * @y: number to convert in binary
 */
void print_binary(unsigned long int y)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = y >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
