#include "main.h"
#include <stdlib.h>

/**
 * _calloc - sets mem
 * @nmemb: members
 * @size: size
 *
 * Return: returns void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (ptr);
}

