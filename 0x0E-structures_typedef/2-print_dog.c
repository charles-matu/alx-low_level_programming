#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the structure.
 *
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL) /* Check if pointer is NULL */
	{
		if (d->name != NULL) /* Check if name is NULL */
			printf("Name: %s\n", d->name); /* Print name */
		else
			printf("Name: (nil)\n"); /* Print NULL for name */
		printf("Age: %.6f\n", d->age); /* Print age */
		if (d->owner != NULL) /* Check if owner is NULL */
			printf("Owner: %s\n", d->owner); /* Print owner */
		else
			printf("Owner: (nil)\n"); /* Print NULL for owner */
	}
}

