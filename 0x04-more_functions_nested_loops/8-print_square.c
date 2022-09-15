#include "main.h"

/**
 * print_square - prints square
 * @n: int type value
 *
 * Return: returns an int
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

