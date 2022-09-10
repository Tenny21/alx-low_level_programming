#include <stdio.h>

/**
 * main - must contain the body oif nthe code
 *
 * Return: must return an integer zero
 */
int main(void)
{
	char i[] = "0123456789";
	int l = 0;

	while (i[l] != '\0' && i[l] != '\n')
	{
		putchar(i[l]);
		l++;
	}
	putchar('\n');
	return (0);
}	

