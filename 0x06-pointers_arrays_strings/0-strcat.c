#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates string
 * @dest: destination string
 * @src: source string
 *
 * Return: returns the pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;
	char *ptr;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];
	printf("%s\n", dest);

	ptr = dest;

	return (ptr);
}

