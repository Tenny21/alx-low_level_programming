#include "main.h"

/**
 * _strlen - checks the length of string
 * @s: pointer to string
 *
 * Return: return int
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}

