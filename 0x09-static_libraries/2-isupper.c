#include "main.h"

/**
 * _isupper - checks if a char is upper
 * @c: char
 *
 * Return: returns an int
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}

