#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: str to check
 *
 * Description: prints
 *
 * Return: returns voidf
 */

void _puts(char *str)
{
	int string;

	for (string = 0; *(str + string) != '\0' ; string++)
		_putchar(*(str + string));
	_putchar('\n');
}

