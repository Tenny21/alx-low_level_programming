#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - body of the code
 *
 * Return: must return zero
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

