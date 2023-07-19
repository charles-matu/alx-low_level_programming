#include "function_pointers.h"

/**
 * int_index - Search for an integer index.
 * @array: Array to search.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of first match or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array && cmp) /* Check if array and cmp are not NULL */
		{
			while (i < size) /* Iterate over the elements */
			{
				if (cmp(array[i])) /* Call the comparison function */
					return (i); /* Return the index of the match */

				i++;
			}
		}
	}

	return (-1); /* Return -1 if no match found or invalid input */
}

