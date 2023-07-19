#include "function_pointers.h"

/**
 * array_iterator - Execute function on each element.
 *
 * @array: Array to operate on.
 * @size: Size of the array.
 * @action: Pointer to function.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size,
		    void (*action)(int))
{
	size_t i;

	if (array && action) /* Check if not NULL */
	{
		i = 0;
		while (i < size) /* Iterate elements */
		{
			action(array[i]); /* Call function */
			i++;
		}
	}
}

