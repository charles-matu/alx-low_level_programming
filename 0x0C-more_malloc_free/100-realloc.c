#include "main.h"

/**
 * _realloc - Reallocate memory block.
 *
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the newly allocated memory, or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL) /* Check if pointer is NULL */
	{
		p = malloc(new_size); /* Allocate new memory block */
		return (p);
	}
	else if (new_size == 0) /* Check if new size is 0 */
	{
		free(ptr); /* Free the previous memory block */
		return (NULL);
	}
	else if (new_size == old_size) /* Check if sizes are equal */
		return (ptr);
	p = malloc(new_size); /* Allocate new memory block */
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++) /* Copy data from old block to new block */
		p[i] = oldp[i];
	free(ptr); /* Free the previous memory block */
	return (p);
}

