#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be processed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;

	if ((length + 1) % 2 != 0)
		start = (length - 1) / 2;
	else
		start = length / 2;

	for (; str[start] != '\0'; start++)
		_putchar(str[start]);

	_putchar('\n');
}

