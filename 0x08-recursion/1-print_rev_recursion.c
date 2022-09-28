#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i, j;

	i = -1;
	j = 0;

	if (s[i] == s[j])
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s + 1);
	}
}

