#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* Copy characters from src to dest until null terminator */
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0'; /* Append null terminator to dest */

	return (dest);
}

