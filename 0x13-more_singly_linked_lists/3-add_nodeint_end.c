#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the head of the linked list.
 * @n: Integer value to add to the list.
 *
 * Desc: Adds a new node at the beginning of a singly linked list.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Assign the integer value to the new node */
	new_node->next = *head; /* Make the new node point to the current head */
	*head = new_node; /* Update the head to point to the new node */

	return (new_node); /* Return the address of the new node */
}

