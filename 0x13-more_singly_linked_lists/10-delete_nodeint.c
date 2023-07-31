#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Desc: Deletes the node at the specified index in the list.
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1); /* Return 1 for success */
	}

	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1); /* Return -1 for failure (index out of range) */
		temp = temp->next;
	}

	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1); /* Return 1 for success */
}

