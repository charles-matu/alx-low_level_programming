#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Integer value indicating the comparison result
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

