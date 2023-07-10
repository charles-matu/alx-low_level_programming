#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate 2D array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to the allocated array.
 *         Returns NULL if width/height is non-positive or if allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0) /* Check for non-positive dimensions */
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height); /* Allocate row pointers */
	if (array == NULL) /* Check for allocation failure */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width); /* Allocate each row */
		if (array[i] == NULL) /* Check for allocation failure */
		{
			for (i--; i >= 0; i--) /* Free previously allocated rows */
				free(array[i]);
			free(array); /* Free row pointers */
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0; /* Initialize array elements to 0 */
	}

	return (array);
}

