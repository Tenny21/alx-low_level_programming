#include <stdio.h>

/**
 * main - contains the body of the code
 *
 * Description: prints lowercase alphabets
 *
 * Return: must return an  integer zero
 */

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

