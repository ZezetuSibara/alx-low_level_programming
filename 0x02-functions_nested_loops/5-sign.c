#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: a parameter to be printed
 *
 * Return: 1 and prints + if n is greater than zero
 * and 0 and prints 0 if n is zero
 * and -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
