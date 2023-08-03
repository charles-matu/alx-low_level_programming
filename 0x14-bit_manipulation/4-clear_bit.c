#include "main.h"

/**
 * clear_bit - Clear bit at index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = ~(1 << index); /* Set mask to clear the bit at the index */
	*n &= mask; /* Use bitwise AND to clear the bit to 0 */

	return (1);
}

