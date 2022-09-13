#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 * main - body of the code
 *
 * Return: must return zero
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

