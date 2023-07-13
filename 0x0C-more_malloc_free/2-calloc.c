#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to array, or NULL on failure or invalid range
 */
int *array_range(int min, int max)
{
	int *ptr; /* Pointer to array */
	int size, i; /* Array size and loop counter */

	if (min > max)
		return (NULL); /* Invalid range, return NULL */

	size = max - min + 1; /* Calculate array size */
	ptr = malloc(size * sizeof(int)); /* Allocate memory */

	if (ptr == NULL)
		return (NULL); /* Allocation failed, return NULL */

	for (i = 0; i < size; i++)
		ptr[i] = min++; /* Fill array with values */

	return (ptr); /* Return array pointer */
}

