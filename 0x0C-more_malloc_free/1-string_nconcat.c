#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a specified length.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	/* Check if s1 is NULL, set length to 0 if true */
	if (s1 == NULL)
		x = 0;
	else
		for (x = 0; s1[x]; ++x)
			;

	/* Check if s2 is NULL, set length to 0 if true */
	if (s2 == NULL)
		y = 0;
	else
		for (y = 0; s2[y]; ++y)
			;

	/* Limit length of s2 to n characters */
	if (y > n)
		y = n;

	/* Allocate memory for the concatenated string */
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);

	/* Copy characters from s1 into the new string */
	for (z = 0; z < x; z++)
		s[z] = s1[z];

	/* Append characters from s2 into the new string */
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];

	/* Null-terminate the new string */
	s[x + y] = '\0';

	return (s);
}

