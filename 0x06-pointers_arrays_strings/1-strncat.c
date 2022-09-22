#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates half of the string
 * @dest: destination string
 * @src: source string
 * @n: the number of characters
 * Return: returns the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
		dlen++;
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}

