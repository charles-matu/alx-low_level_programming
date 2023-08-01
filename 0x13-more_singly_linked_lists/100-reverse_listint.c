#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Desc: Reverses the linked list in place.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next; /* Store the next node */
		(*head)->next = previous; /* Reverse the link */
		previous = *head; /* Move previous one step ahead */
		*head = next; /* Move head one step ahead */
	}

	*head = previous; /* Set the head to the last node (new first node) */
	return (*head);
}

