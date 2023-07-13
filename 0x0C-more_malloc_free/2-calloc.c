#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Old size of the memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);

	for (i = 0; i < old_size || i < new_size; i++)
	{
		*(relloc + i) = clone[i];
	}

	free(ptr);
	return (relloc);
}

