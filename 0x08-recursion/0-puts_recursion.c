#include "main.h"

/**
 * _puts_recursion - prints character unto the screen
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		*s = *s - s[i];
		_puts_recursion(s);
	}
}

