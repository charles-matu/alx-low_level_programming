#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: Length of the string (integer).
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

