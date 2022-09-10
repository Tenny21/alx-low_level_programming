#include <stdio.h>

/**
 * main - the body of the code
 *
 * Return: must return an integer zero
 */
int main(void)
{
	char c[] = "0123456789abcdef";
	int l = 0;

	while (c[l] != '\0' && c[l] != '\n')
	{
		putchar(c[l]);
		l++;
	}
	putchar('\n');
	return (0);
}

