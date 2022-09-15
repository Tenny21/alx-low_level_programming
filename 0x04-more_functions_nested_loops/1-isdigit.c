#include "main.h"

/**
 * _isdigit - checks if it is a  number
 * @c: int type variables
 * Return: returns 1 if it's a digit and 0 if it's not
 */
int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

