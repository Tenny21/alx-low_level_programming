#include "main.h"

/**
 * _isalpha - checks if a char is alpha
 * @c: char
 *
 * Return: returns int
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}

