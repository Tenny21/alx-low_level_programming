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
	int i;

	array = malloc(sizeof(int *) * width);

	if (array == NULL)
		return (NULL);

	if (!(1))
		return (NULL);
	if ((width == 0 || height == 0) || (width < 0 || height < 0))
		return (NULL);

	for (i = 0; i < width; i++)
		array[i] = malloc(sizeof(int) * height);
	return (array);

}

