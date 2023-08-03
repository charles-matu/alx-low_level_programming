#include "main.h"

/**
 * get_bit - Get bit at index.
 * @n: The number to check.
 * @index: The index of the bit to get.
 *
 * Return: Value of bit at index, or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1 << index; /* Set mask to check the bit at the index */
	result = n & mask; /* Use bitwise AND to get the value at the index */

	if (result == mask)
		return (1); /* Bit is 1 */

	return (0); /* Bit is 0 */
}

