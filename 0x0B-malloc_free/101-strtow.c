#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - Split string into words.
 * @str: The string.
 *
 * Return: Pointer to array of strings.
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])  /* Calculate total words */
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;  /* Increment count if last char is not space */
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));  /* Allocate memory */
	if (words == NULL)
		return (NULL);

	util(words, str);  /* Extract words */
	words[len] = NULL;
	return (words);
}

/**
 * util - Utility function for fetching words.
 * @words: The array.
 * @str: The string.
 */
void util(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])  /* Iterate through string */
	{
		if (flag == 0 && str[i] != ' ')  /* Start of new word */
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')  /* End of word */
		{
			create_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)  /* Handle last word if not terminated by space */
		create_word(words, str, start, i, j);
}

/**
 * create_word - Create word and insert into array.
 * @words: The array.
 * @str: The string.
 * @start: The start index.
 * @end: The end index.
 * @index: The index.
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));  /* Allocate memory */

	for (j = 0; start < end; start++, j++)  /* Copy characters */
		words[index][j] = str[start];
	words[index][j] = '\0';  /* Null-terminate */
}

