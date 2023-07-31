#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: Pointer to the first node of the list.
 * @index: Index of the desired node.
 *
 * Desc: Returns the node at the given index.
 * Return: Pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next; /* Move to the next node */
		if (head == NULL)
			return (NULL); /* Return NULL if index is out of range */
	}

	return (head); /* Return pointer to the node at the given index */
}

