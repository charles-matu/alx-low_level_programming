#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 *
 * @s: The string to be capitalized
 *
 * Return: Address of the modified string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 'a' - 'A';
				}
			}
		}
		i++;
	}

	return (s);
}

