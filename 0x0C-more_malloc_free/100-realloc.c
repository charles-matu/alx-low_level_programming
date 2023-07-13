#include "main.h"

/**
 * _realloc - Reallocates memory block.
 *
 * @ptr: Pointer to block.
 * @old_size: Old size in bytes.
 * @new_size: New size in bytes.
 *
 * Return: Pointer to reallocated block, or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr; /* New block pointer */
	unsigned int i, copy_size; /* Loop counter and copy size */
	char *old_ptr = ptr; /* Old block pointer */

	if (new_size == old_size)
		return (ptr); /* Sizes are the same, return original pointer */

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL); /* Free memory block and return NULL */
	}

	new_ptr = malloc(new_size); /* Allocate memory for new block */
	if (new_ptr == NULL)
		return (NULL); /* Memory allocation failed, return NULL */

	copy_size = old_size; /* Determine copy size */
	if (new_size < old_size)
		copy_size = new_size;

	for (i = 0; i < copy_size; i++)
		new_ptr[i] = old_ptr[i]; /* Copy contents to new block */

	free(ptr); /* Free old block */
	return (new_ptr); /* Return pointer to new block */
}

