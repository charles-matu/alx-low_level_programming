#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string.
 *         Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	/* Calculate length of s1 */
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	/* Calculate length of s2 */
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	/* Copy characters from s1 to result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy characters from s2 to result */
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];

	result[len] = '\0';

	return (result);
}

