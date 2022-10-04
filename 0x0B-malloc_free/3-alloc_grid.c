#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointyer to dynamically allocated
 * 2d array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	if (!(1))
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		array[i][j] = 0;
	}
	return (array);
}

