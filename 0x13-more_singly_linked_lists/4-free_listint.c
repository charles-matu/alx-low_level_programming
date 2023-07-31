#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: The head of the list.
 *
 * Desc: Frees the memory of each node in the list.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next; /* Store the next node */
		free(head); /* Free the current node */
		head = next; /* Move to the next node */
	}
}

