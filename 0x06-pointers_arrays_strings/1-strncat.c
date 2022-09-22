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
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest);
}

