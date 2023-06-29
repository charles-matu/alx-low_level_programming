#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase in a string
 *
 * @s: The string to be modified
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}

