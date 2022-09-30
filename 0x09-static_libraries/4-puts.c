#include "main.h"

/**
 * _puts - prints a char out
 * @s: string ponter
 *
 * Return: void
 */
void _puts(char *s)
{
	if (s)
	{
		while (*s)
			_putchar(*s++);
		_putchar('\n');
	}
}

