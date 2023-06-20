#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter); /* Print the current letter */
	}

	_putchar('\n'); /* Print a new line after the loop */
}


