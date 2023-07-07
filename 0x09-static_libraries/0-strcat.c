#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string (same as @dest).
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;  /* Store the starting address of @dest */

	/* Find the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Concatenate the source string to the destination string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the null terminator to the concatenated string */
	*dest = '\0';

	return (s);  /* Return the starting address of the resulting string */
}

