#include "main.h"

/**
 * print_numbers - print the natural numbers from 0 - 9
 *
 * Return: returns zero
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

