#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free memory of a linked list.
 * @head: Pointer to the first node.
 *
 * Description: Recursively frees list nodes and strings.
 */
void free_list(list_t *head)
{
	if (head) /* Check if the current node is not NULL. */
	{
		free_list(head->next); /* Recursively free the rest of the list. */

		if (head->str) /* Check if the string in the current node is not NULL. */
			free(head->str); /* Free the memory allocated for the string. */

		free(head); /* Free the memory allocated for the current node. */
	}
}

