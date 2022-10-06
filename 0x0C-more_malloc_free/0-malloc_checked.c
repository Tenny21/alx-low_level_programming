#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates a space i the mem
 * @b: unsigned int
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

