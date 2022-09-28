#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: int value
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n != 1)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
		return (1);
}

