#include "main.h"

/**
 * _memcpy - copies string from one var to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: returns the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest = src;
	return (dest);
}

