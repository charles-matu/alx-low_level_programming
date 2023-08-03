#include "main.h"

/**
 * set_bit - Set bit at index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1 << index; /* Set mask to modify the bit at the index */
	*n |= mask; /* Use bitwise OR to set the bit to 1 */

	return (1);
}

