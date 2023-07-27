#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calculate the number of nodes in a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 *
 * Description:
 * This function calculates the number of nodes in a linked list.
 * It starts from the given head node (h) and iterates through the list
 * until the end, counting each node along the way.
 */
size_t list_len(const list_t *h)
{
	int count = 0; /* Initialize node count. */

	while (h)
	{
		count++; /* Increment node count. */
		h = h->next; /* Move to the next node. */
	}
	return (count); /* Return the total number of nodes. */
}

