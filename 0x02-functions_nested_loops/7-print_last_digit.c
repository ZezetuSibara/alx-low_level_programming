#include "main.h"


/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @i: ap parameter to be printed
 *
 * Return: Always k
*/

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
