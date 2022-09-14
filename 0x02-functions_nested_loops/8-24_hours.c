#include "main.h"

/**
 * jack_bauer  - prints every minute of the day
 *
 * Return: returns an integer
 */

void jack_bauer(void)
{
	int q, w, e, r;

	for (q = 0; q <= 2; q++)
	{
		for (w = 0; w <= 9; w++)
		{
			for (e = 0; e < 6; e++)
			{
				for (r = 0; r <= 9; r++)
				{
					_putchar('0' + q);
					_putchar('0' + w);
					_putchar(':');
					_putchar('0' + e);
					_putchar('0' + r);
					_putchar('\n');
				}
			}
		}
	}
}

