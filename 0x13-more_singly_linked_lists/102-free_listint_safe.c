#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_list - Reallocates memory for an array of pointers
 *                 to nodes in a linked list.
 * @list: The old list to append.
 * @size: Size of the new list (always one more than the old list).
 * @new: New node to add to the list.
 *
 * Return: Pointer to the new list.
 */
listint_t **_realloc_list(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @head: Double pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);

	/* Iterate through the list */
	while (*head != NULL)
	{
		/* Check for loop and free the current node */
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}

		/* Add the current node to the list and move to the next node */
		num++;
		list = _realloc_list(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	/* Free the list and return the number of nodes */
	free(list);
	return (num);
}

