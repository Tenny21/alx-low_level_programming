#include "main.h"
#include <stdio.h>

/**
 *  _islower(int c) - checks if a character is lowercase
 * @c: char type letter
 *
 * Return: returns an int 1
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

