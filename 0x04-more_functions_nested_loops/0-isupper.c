#include "main.h"

/**
 * _isupper - checks if a char is upppercase
 *  @c: char type variable
 *  Return: returns 1 if it's uppercase and 0 if it's not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

