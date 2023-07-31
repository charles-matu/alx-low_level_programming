#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Double pointer to the head of the list.
 *
 * Desc: Removes the first node and returns its value.
 * Return: The value of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head; /* Save the current head node */
	*head = start->next; /* Move head to the next node */
	n = start->n; /* Get the value of the deleted node */
	free(start); /* Free the deleted node */
	return (n); /* Return the value of the deleted node */
}

