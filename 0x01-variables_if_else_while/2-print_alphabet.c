#include <stdio.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter); /* Convert the letter to lowercase */
		putchar(letter); /* Print the current letter */
	}
	putchar('\n'); /* Print a new line after printing all the letters */

	return (0);
}

