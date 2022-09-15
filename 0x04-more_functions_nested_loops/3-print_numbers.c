#include "main.h"

/**
 * print_numbers - print the natural numbers from 0 - 9
 *
 * Return: returns zero
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

