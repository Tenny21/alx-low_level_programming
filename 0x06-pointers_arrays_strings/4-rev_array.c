#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array of int
 * @n: num of int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}

