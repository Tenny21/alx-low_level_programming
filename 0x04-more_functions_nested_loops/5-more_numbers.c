#include "main.h"

/**
 * more_numbers - prints number 10x
 *
 * Return: must returns zero
 */
void more_numbers(void)
{
	int i, n;

	n = 0;

	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		n++;
	}
	_putchar('\n');
}

