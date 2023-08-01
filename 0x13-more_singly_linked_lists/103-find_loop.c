#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the beginning of the list
 *
 * Return: Address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head; /* Initialize slow and fast pointers to the head */
	while (slow && fast && fast->next)
	{
		slow = slow->next; /* Move slow pointer one step */
		fast = fast->next->next; /* Move fast pointer two steps */

		/* Check if slow and fast pointers meet, indicating a loop */
		if (slow == fast)
		{
			slow = head; /* Reset slow pointer to the head */

			/* Move both pointers at the same speed until they meet again */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow); /* Return the address of the node where the loop starts */
		}
	}

	return (NULL); /* Return NULL if there's no loop in the list */
}

