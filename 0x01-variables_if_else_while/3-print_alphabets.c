#include <stdio.h>

/**
 * main - Contains the body of the code
 *
 * Return: must return an integer zero
 */
int main(void)
{
	char c = 'a';

	for (c <= 'z'; c++;)
	{
		putchar( c);
	}
	for (char h = 'A'; h <= 'Z'; h++)
	{
		putchar( h);
	}
	putchar('\n');
	return (0);
}

