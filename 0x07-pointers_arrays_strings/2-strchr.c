#include "main.h"
#include <stddef.h>

/**
 * _strchr - searches for a char in a string
 * @s: string to work with
 * @c: char to be searched
 *
 * Return: returns the pointer to the variable
 * if it's present and null if it's not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
	}
	return (NULL);
}

