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
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (c[i] != '\0' || c[i] != '\n')
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');

}

