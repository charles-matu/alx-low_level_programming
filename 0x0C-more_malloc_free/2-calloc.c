#include "main.h"

/**
 * _calloc - Allocate memory for an array
 *           of nmemb elements of size bytes
 *           each and return a pointer.
 *
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory,
 *         or NULL on failure or invalid input.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a; /* Pointer to allocated memory */
	unsigned int b; /* Loop counter */

	if (nmemb == 0 || size == 0)
		return (NULL); /* Invalid input, return NULL */

	a = malloc(nmemb * size); /* Allocate memory */

	if (a == NULL)
		return (NULL); /* Allocation failed, return NULL */

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0; /* Initialize allocated memory to 0 */

	return (a); /* Return pointer to allocated memory */
}

