#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index of the desired position to insert the new node.
 * @n: Value of the new node to be inserted.
 *
 * Desc: Inserts a new node with the given value at the specified index.
 * Return: The address of the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next; /* Move to the node before the desired position */
		}

		if (temp == NULL)
			return (NULL); /* Return NULL if index is out of range */
	}

	new = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (new == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	new->n = n; /* Set the value of the new node */

	if (idx == 0)
	{
		new->next = *head; /* Insert at the beginning of the list */
		*head = new;
		return (new);
	}

	new->next = temp->next; /* Insert at the desired position */
	temp->next = new;
	return (new);
}

