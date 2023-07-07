#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *        Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}

