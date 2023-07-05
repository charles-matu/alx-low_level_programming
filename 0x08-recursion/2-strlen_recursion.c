#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++; /* Increment count for the current character */
		count += _strlen_recursion(s + 1); /* Recursively call with next character */
	}

	return (count);
}

