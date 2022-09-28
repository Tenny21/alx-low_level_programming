#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	if (s[i] != '\0')
	{
		len++;
		i++;
		_strlen_recursion(s + 1);
	}
	else
		return (len);
}

