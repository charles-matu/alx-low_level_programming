#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem; /* Counter for the number of elements in the list. */

	nelem = 0;
	while (h != NULL) /* Traverse through the list. */
	{
		if (h->str == NULL) /* Check if the string is NULL. */
			printf("[%d] %s\n", 0, "(nil)"); /* Print element with NULL string. */
		else
			printf("[%d] %s\n", h->len, h->str); /* Print element with string. */
		h = h->next; /* Move to the next node. */
		nelem++; /* Increment the element counter. */
	}
	return (nelem); /* Return the number of elements in the list. */
}

