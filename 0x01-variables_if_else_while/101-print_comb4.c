#include <stdio.h>

/**
 * main - must contain the body
 *
 * Return: must return a zero
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}	
			}
		}
	}
	putchar('\n');
	return (0);
}

