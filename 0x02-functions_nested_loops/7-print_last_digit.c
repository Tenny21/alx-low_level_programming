#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: integer type variable
 *
 * Return: returns in int
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}
	_putchar('0' + c);
	return (c);
}

