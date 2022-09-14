#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char c;
	int j = 0;

	while (j < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		j++;
	}
}

