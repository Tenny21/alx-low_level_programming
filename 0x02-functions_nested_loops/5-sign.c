#include "main.h"

/**
 * print_sign - prints the sign of number
 * @n: integer type value
 * Return: returns 1 if it's a positive number and 0 if it's not
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

