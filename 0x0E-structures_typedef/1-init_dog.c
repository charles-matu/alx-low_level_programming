#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: Initializes the members of struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Check if pointer is NULL */
		return;

	else
	{
		d->name = name; /* Assign name to struct member */
		d->age = age; /* Assign age to struct member */
		d->owner = owner; /* Assign owner to struct member */
	}
}

