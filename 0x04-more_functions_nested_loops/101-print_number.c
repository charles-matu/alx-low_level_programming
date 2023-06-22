#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Description: This function prints an integer character by character.
 * If the number is negative, it prints a minus sign '-' and converts
 * the number to its positive counterpart. It then recursively calls
 * itself to print each digit of the number.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

