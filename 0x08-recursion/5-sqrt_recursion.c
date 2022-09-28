#include "main.h"

/**
 * find_rt - returns the the natural square
 * @n: integer
 * @root: root
 *
 * Return: returns int
 */
int find_rt(int n, int root)
{
	if (n / root == root)
		return (root);
	if (n / 2 == root)
		return (-1);
	return (find_rt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_rt(n, root));
}

