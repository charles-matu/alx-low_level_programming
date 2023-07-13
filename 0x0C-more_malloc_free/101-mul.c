#include "main.h"

/**
 * _print - Move string left & print it.
 *
 * @str: String to move.
 * @l: Size of string.
 *
 * Return: Void.
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1; /* Check if non-zero digit encountered */
		if (j || i == l - 1)
			_putchar(str[i]); /* Print the character */
		i++;
	}

	_putchar('\n');
	free(str); /* Free the allocated memory */
}

/**
 * mul - Multiply char with string & place in dest.
 *
 * @n: Char to multiply.
 * @num: String to multiply.
 * @num_index: Last non-NULL index of num.
 * @dest: Destination of multiplication.
 * @dest_index: Highest index to start addition.
 *
 * Return: Pointer to dest, or NULL on failure.
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem; /* Perform multiplication */
		mulrem = mul / 10; /* Get carry value for next iteration */
		add = (dest[k] - '0') + (mul % 10) + addrem; /* Perform addition */
		addrem = add / 10; /* Get carry value for next iteration */
		dest[k] = add % 10 + '0'; /* Store the result digit */
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem; /* Add remaining carry */
		addrem = add / 10; /* Get carry value for next iteration */
		dest[k] = add % 10 + '0'; /* Store the result digit */
	}
	if (addrem)
		return (NULL); /* Return NULL on failure */
	return (dest); /* Return the result */
}

/**
 * check_for_digits - Check if arguments are digits.
 *
 * @av: Pointer to arguments.
 *
 * Return: 0 if digits, 1 if not.
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1); /* Non-digit found */
		}
	}
	return (0); /* Digits only */
}

/**
 * init - Initialize a string.
 *
 * @str: String to initialize.
 * @l: Length of string.
 *
 * Return: Void.
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0'; /* Initialize with '0' */
	str[i] = '\0'; /* Null-terminate the string */
}

/**
 * main - Multiply two numbers.
 *
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 on success, or exit status of 98 on failure.
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a, *t, e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]); /* Print error message */
		exit(98); /* Exit with status 98 */
	}
	for (l1 = 0; argv[1][l1]; l1++)
		; /* Calculate length of first number */
	for (l2 = 0; argv[2][l2]; l2++)
		; /* Calculate length of second number */
	ln = l1 + l2 + 1; /* Calculate length of resulting string */
	a = malloc(ln * sizeof(char)); /* Allocate memory for result */
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]); /* Print error message */
		exit(98); /* Exit with status 98 */
	}
	init(a, ln - 1); /* Initialize result string with '0' */
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]); /* Print error message */
			free(a); /* Free allocated memory */
			exit(98); /* Exit with status 98 */
		}
	}
	_print(a, ln - 1); /* Print the result */
	return (0); /* Return success status */
}

