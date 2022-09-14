#include "main.h"

/**
 * _isalpha - checks if a char is either lower or uppercase
 * @c: char type
 * Return: must return an int
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

