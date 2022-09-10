#include <stdio.h>

/**
 * main - must contains the body of the code
 *
 * Description: prints lowercase alphabets
 *
 * Return: must return an  integer zero
 */

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int l =0;

	while (c[l] != '\0' && c[l] != '\n')
	{
		putchar(c[l]);
		l++;
	}
	putchar('\n');
	return (0);
}

