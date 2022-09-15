#include "main.h"

/**
 * print_most_numbers - prints all the numbers except 2 and 4
 *
 * Returns: zero
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

