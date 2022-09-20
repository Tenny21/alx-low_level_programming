#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: int to check
 *
 * Return: returns void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	while (n--)
		_putchar(s[n]);
	_putchar('\n');
}

