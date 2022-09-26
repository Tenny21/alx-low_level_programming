#include "main.h"

/**
 * _strspn - prints the byte of the first part of a string
 * @s: string
 * @accept: ...
 *
 * Return: returns the number of byte of the in segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i, j;

	for (i = 0; s[i] < '\0'; i++)
	{
		for (j = 0; accept[j] < '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
		}
	}
	return (len);
}

