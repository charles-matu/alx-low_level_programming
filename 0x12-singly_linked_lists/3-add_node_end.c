#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Find the length of a string.
 * @str: Pointer to the string.
 * Return: Length of the string.
 *
 * Description: Calculate the length of the given string (str).
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++) /* Loop through characters. */
		;
	return (i); /* Return the length. */
}

/**
 * add_node_end - Add a new node to the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to add to the new node.
 * Return: Pointer to the new node.
 *
 * Description: Create a new node, allocate memory, duplicate the input
 * string (str), calculate the length, and link the new node to the list's end.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL) /* Check if string is NULL. */
		return (NULL);

	new = malloc(sizeof(list_t)); /* Allocate memory for new node. */
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* Duplicate the string. */
	if (new->str == NULL) /* Check if string duplication failed. */
	{
		free(new); /* Free memory for new node. */
		return (NULL);
	}

	new->len = _strlen(new->str); /* Calculate the length. */
	new->next = NULL;

	if (*head == NULL) /* Check if the list is empty. */
	{
		*head = new; /* Set the new node as the head. */
		return (new);
	}

	tmp = *head; /* Start traversal from the head. */
	while (tmp->next) /* Traverse list until the last node. */
		tmp = tmp->next;

	tmp->next = new; /* Link the new node to the last node. */
	return (new);
}

