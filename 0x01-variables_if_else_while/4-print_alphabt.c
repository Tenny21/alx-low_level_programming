#include <stdio.h>

/**
 * main - The body of the code
 *
 * Return: must return an integer zero
 */
int main(void)
{	
	for (char c ='a'; c <= 'z'; c++)
	{
		if ( c != 'e' && c != 'q')
		{
			putchar( c);
		}
	}
	return (0);
}

