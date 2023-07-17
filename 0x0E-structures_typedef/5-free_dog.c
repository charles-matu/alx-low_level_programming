#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to the dog to free.
 *
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d) /* Check if pointer is not NULL */
	{
		free(d->name); /* Free the memory allocated for name */
		free(d->owner); /* Free the memory allocated for owner */
		free(d); /* Free the memory allocated for dog */
	}
}

