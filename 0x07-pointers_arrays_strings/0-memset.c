#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the destination variable
 * @b: variable to be asigned
 * @n: number of byte
 *
 * Return: returns the destination variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

