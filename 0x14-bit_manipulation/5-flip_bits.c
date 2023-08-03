#include "main.h"

/**
 * flip_bits - Count bits to flip.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, r;
	unsigned int c, i;

	c = 0;
	r = 1;
	d = n ^ m; /* Calculate XOR difference */

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (r == (d & r)) /* Check if current bit is set */
			c++; /* Increment count if bit is set */
		r <<= 1; /* Move to next bit position */
	}

	return (c); /* Return total count of bits to flip */
}

