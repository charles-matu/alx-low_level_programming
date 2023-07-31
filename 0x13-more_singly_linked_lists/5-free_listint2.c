#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double pointer to the head.
 *
 * Desc: Frees memory of each node.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next; /* Store the next node */
		free(*head); /* Free current node */
		*head = next; /* Move to the next node */
	}
}

