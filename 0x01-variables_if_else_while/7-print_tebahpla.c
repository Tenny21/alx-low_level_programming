#include <stdio.h>

/**
 * main - must be the body
 *
 * Return: must return an int zero
 */
int main(void)
{
	char c[] = "zyxwvutsrqponmlkjihgfedcba";
	int l = 0;

	while (c[l] != '\0' && c[l] != '\n')
	{
		putchar(c[l]);
		l++;
	}
	putchar('\n');
	return (0);
}

