#include <stdio.h>

/**
 * main - must contain the body
 *
 * Return: must return a zero
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (a != 8 || (a == 8 && b != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

