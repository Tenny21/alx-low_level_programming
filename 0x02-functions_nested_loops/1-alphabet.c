#include "main.h"
#include <stdio.h>

/**
 * print_alphabet- pribnt lowercase alphabet
 *
 * Description: print lowercase alphabets
 * Return: must return an integer zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

}

