#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: char typr
 *
 * Return: returns int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

