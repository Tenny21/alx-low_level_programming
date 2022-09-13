#include <main.h>
#include <stdio.h>

/**
 * print_alphabet- pribnt lowercase alphabet
 *
 * main- body of the code
 * Description: print lowercase alphabets
 * Return: must return an integer zero
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

