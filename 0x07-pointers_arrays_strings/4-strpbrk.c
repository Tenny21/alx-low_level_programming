#include "main.h"

/**
 * _strpbrk - searches a string for any set of battery
 * @s: ...
 * @accept: ...
 *
 * Return: returns the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] < '\0'; i++)
		{
			if (*s == accept[i])
			{
				return ((char *) s);
			}
		}
		s++;
	}
}

