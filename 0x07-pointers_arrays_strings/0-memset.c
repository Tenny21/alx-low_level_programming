#include "main.h"

/*
 * _memset - sets value to memory location
 * @s: pointer to the destination variable
 * @b: variable to be asigned
 * @n: number of byte
 *
 * Return: returns the destination variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

