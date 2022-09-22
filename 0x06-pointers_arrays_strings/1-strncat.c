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
	int len1, i;

	len1 = strlen(dest);

	for (i = 0; i <= n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

