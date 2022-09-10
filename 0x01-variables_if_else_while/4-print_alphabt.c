#include <stdio.h>

/**
 * main - The body of the code
 *
 * Return: must return an integer zero
 */
int main(void)
{
	char u[] = "abcdfghijklmnoprstuvwxyz";
	int l = 0;

	while (u[l] != '\0' && u[l] != '\n')
	{
		putchar(u[l]);
		l++;
	}
	putchar('\n');
	return (0);
}

