#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL) /* Check if name or owner is NULL */
		return (NULL);
	dog = malloc(sizeof(dog_t)); /* Allocate memory for dog */
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++) /* Calculate length of name */
		;
	nl++;
	dog->name = malloc(nl * sizeof(char)); /* Allocate memory for name */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++) /* Copy name to dog */
		dog->name[i] = name[i];
	dog->age = age; /* Assign age to dog */
	for (ol = 0; owner[ol]; ol++) /* Calculate length of owner */
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char)); /* Allocate memory for owner */
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++) /* Copy owner to dog */
		dog->owner[i] = owner[i];
	return (dog);
}

