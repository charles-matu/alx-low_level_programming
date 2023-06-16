#include <stdio.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters except 'q' and 'e' followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue; /* Skip printing 'q' and 'e' */
		}

		putchar(letter); /* Print the current letter */
	}

	putchar('\n'); /* Print a new line after printing all the letters */

	return (0);
}

