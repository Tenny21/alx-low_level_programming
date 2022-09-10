#include <stdio.h>

/**
 * main - Contains the body of the code
 *
 * Return: must return an integer zero
 */
int main(void)
{
	char e[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l = 0;

	while (e[l] != '\0' && e[l] != '\n')
	{
		putchar(e[l]);
		l++;
	}
	putchar('\n');
	return (0);
}

