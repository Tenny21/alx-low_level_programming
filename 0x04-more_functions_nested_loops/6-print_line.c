#include "main.h"

/**
 * print_line - print an horizontal line
 *
 * @n:int type value
 * Return: returns an int
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

