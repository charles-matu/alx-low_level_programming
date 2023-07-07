#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: Argument count.
 * @argv: Arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;  /* Unused parameter */

	printf("%s\n", argv[0]);
	return (0);
}

