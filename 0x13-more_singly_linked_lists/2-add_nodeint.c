#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add node at beginning of listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer value to add.
 *
 * Description: Add new node at the beginning.
 *
 * Return: Address of new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* Allocate memory */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Assign integer value */
	new_node->next = *head; /* Make new node point to current head */
	*head = new_node; /* Update head to point to new node */

	return (new_node); /* Return new node address */
}

