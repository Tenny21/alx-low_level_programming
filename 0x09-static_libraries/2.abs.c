#include "main.h"

/**
 * _abs - absolute value
 * @n: integer type variable
 *
 * Return: returns an int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}

