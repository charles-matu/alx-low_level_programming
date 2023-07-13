#include "main.h"
#include <stdlib.h>

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
	char *old_ptr = ptr; /* Original pointer to the memory block */
	char *new_ptr; /* New pointer for the reallocated memory */
	unsigned int i; /* Loop counter */

	if (ptr == NULL)
		return (malloc(new_size)); /* Allocate new memory block */

	if (new_size == old_size)
		return (ptr); /* No need to reallocate, return original pointer */

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL); /* Free memory block and return NULL */
	}

	new_ptr = malloc(new_size); /* Allocate new memory block */
	if (new_ptr == NULL)
		return (NULL); /* Allocation failed, return NULL */

	/* Copy contents from the old memory block to the new one */
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr); /* Free the old memory block */
	return (new_ptr); /* Return the new allocated memory block */
}

