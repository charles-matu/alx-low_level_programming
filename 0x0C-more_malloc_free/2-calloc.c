#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of nmemb
 *           elements of size bytes each. Initialize
 *           the allocated memory to 0.
 *
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL
 *         on failure or if nmemb/size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		unsigned char *byte_ptr = (unsigned char *)ptr;
		unsigned int i;

		for (i = 0; i < nmemb * size; i++)
			byte_ptr[i] = 0;
	}

	return (ptr);
}

