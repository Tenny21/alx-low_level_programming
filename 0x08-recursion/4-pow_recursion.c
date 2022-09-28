#include "main.h"

/**
 * _pow_recursion - returns te value of x raised to the power of y
 * @x: first num
 * @y: sec num
 *
 * Return: returns an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

