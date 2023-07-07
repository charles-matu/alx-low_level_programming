#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *        Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}

