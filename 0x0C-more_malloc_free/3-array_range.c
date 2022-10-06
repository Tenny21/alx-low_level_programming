#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: min
 * @max: max
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, n, j;

	j = 0;

	if (min > max)
		return (NULL);
	n = min;
	while (n <= max)
	{
		j++;
		n++;
	}
	arr = malloc(j * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

