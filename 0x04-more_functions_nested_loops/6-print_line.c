#include "main.h"

/**
 * print_line - print an horizontal line
 *
 * @n:int type value
 * Return: returns an int
 */
void print_line(int n)
{
	char c;
	int i;

	c = '_';
	i = 0;

	for (i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			_putchar(c);
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

