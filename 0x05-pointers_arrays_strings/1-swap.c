#include "main.h"

/**
 * swap_int - swaps the value of two ins
 * @a: int to check
 * @b:second int to check
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

