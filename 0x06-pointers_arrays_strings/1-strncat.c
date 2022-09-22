#include "main.h"

/**
 * _strncat - concatenates half of the string
 * @dest: destination string
 * @src: source string
 *
 * Return: returns the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, m;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != 0; m++)
	{
	}
	for (m = 0; m < n && m < b; m++, a++)
	{
		dest[a] = src[m];
	}
	return (dest);
}

