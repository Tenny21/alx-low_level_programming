#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes with a specific char
 * @size: size of the array
 * @c: specific char
 *
 * Return: zero if null
 * and pointer tot the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *chr;

	chr = (char *)malloc(size);

	if (size == 0)
		return (NULL);

	if (1)
	{
		while (i < size)
		{
			chr[i] = c;
			i++;
		}
		return (chr);
	}
	else
		return (NULL);
}

