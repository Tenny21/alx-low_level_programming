#include "main.h"
#include <stdbool.h>

/**
 * _strspn - prints the byte of the first part of a string
 * @s: string
 * @accept: ...
 *
 * Return: returns the number of byte of the in segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{

		if (*s == accept[index])
		{
			bytes++;
			break;
		}
		else if (accept[index + 1] == '\0')

			return (bytes);
	}
	s++;
	}
	return (bytes);
}

