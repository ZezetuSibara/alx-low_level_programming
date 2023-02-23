#include "main.h"

/**
 * print_most_numbers - check checks for a digit (0 through 9)
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
