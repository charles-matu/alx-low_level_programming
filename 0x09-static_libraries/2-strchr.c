#include "main.h"

/**
 * _strchr - Locates the first occurrence of character @c in string @s.
 *
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of character @c in string @s,
 *         or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

