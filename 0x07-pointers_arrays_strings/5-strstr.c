#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: Pointer to the longer string to search.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the substring within @haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}

