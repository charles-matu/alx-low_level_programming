#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be processed.
 *
 * Description: This function prints the second half of a given string.
 *              If the length of the string is odd, it prints from the middle character onwards.
 *              If the length is even, it prints from the character after the middle character onwards.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0') /* Find the length of the string */
		length++;

	if ((length + 1) % 2 != 0) /* Determine the starting index based on the length */
		start = (length - 1) / 2;
	else
		start = length / 2;

	for (; str[start] != '\0'; start++) /* Print the second half of the string */
		_putchar(str[start]);

	_putchar('\n');
}

