#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: Pointer to the string.
 * @accept: Pointer to the set of bytes to be searched for.
 *
 * Return: Pointer to the first occurrence of any byte from @accept in @s,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}

