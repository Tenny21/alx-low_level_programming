#include "main.h"

/**
 * _islower - checks if a char is an uppercase
 * @c: character type variable
 *
 * Return: returns an int
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

