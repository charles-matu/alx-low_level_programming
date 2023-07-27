#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Description:
 * This function prints the content and length of each node in the linked list.
 * If the string in a node is NULL, it prints "[0] (nil)". The function returns
 * the total number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	int count = 0; /* Count nodes. */

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n"); /* Format for NULL strings. */
		else
			printf("[%d] %s\n", h->len, h->str); /* Format for non-NULL strings. */

		count++; /* Increment node count. */
		h = h->next; /* Move to the next node. */
	}
	return (count); /* Return node count. */
}

