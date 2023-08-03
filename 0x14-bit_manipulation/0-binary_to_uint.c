#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, or 0 if invalid input or error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);

	/* Loop through the string to check for valid binary digits */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	/* Convert binary to unsigned int */
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}

	return (j);
}

