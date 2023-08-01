#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to the head of the linked list.
 * @n: Integer value to add to the new node.
 *
 * Return: Address of the new element (the new node).
 *         NULL if it fails to allocate memory for the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Check if the head is NULL */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign the integer value to the new node */
	new_node->n = n;
	new_node->next = NULL; /* Make the new node point to NULL */

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Make the last node point to the new node */
	temp->next = new_node;

	return (new_node); /* Return the address of the new node */
}

