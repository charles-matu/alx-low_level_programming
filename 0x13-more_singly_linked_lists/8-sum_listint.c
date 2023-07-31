#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list.
 * @head: Pointer to the first node of the list.
 *
 * Desc: Sums all the data values in the list.
 * Return: The sum of all the data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n; /* Add the current data value to the sum */
		head = head->next; /* Move to the next node */
	}

	return (sum); /* Return the total sum of data values */
}

