#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates half of the string
 * @dest: destination string
 * @src: source string
 *@n: the number of characters

 * Return: returns the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, l;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (l = 0; src[l] != 0; l++)
	{
	}
	for (b = 0; b < n && b < src[l]; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}

