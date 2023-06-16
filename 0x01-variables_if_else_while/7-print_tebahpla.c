#include <stdio.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters in reverse followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter); /* Print the current letter */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

