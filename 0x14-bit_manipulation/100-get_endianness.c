#include "main.h"

/**
 * get_endianness - Check the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1; /* Set a value to check the memory representation */
	c = (char *)&i; /* Typecast to char pointer */

	return (*c); /* Return the value in the first byte */
}

