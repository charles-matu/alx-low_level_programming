#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars, initialize with specific char.
 * @size: Size of the array.
 * @c: Initial value for each element.
 * Return: Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

