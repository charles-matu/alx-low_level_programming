#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Pointer to the head of a list_t list.
 * @str: Value to insert into the new element.
 * Return: A pointer to the newly added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

