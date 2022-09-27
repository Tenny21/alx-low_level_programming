#include "main.h"

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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}

