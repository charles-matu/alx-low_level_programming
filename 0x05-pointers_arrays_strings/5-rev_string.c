#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function reverses a string by swapping characters.
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* Swap characters to reverse the string */
	for (start = 0; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

