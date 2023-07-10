#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates program arguments into a single string.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL) /* Check for valid arguments */
		return (NULL);

	for (i = 0; i < ac; i++) /* Calculate total length of string */
	{
		s = av[i];
		j = 0;
		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1)); /* Allocate memory */
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++) /* Copy characters */
	{
		s = av[i];
		k = 0;
		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n'; /* Add newline character */
	}
	str[j] = '\0'; /* Add null terminator */

	return (str);
}

