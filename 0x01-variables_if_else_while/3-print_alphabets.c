#include <stdio.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters in all cases followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);

		if (letter == 'z')
		{
			letter = 'A';
			for (; letter <= 'Z'; letter++)
			{
				putchar(letter);
			}
			break;
		}
	}

	putchar('\n');

	return (0);
}

