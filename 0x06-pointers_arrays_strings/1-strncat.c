#include "main.h"

/**
 * _strncat - Concatenates two strings up to a specified length.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	/* Concatenate the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	/* Add the null terminator to the concatenated string */
	dest[i + j] = '\0';

	return (dest);
}

