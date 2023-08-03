#include "main.h"

/**
 * _power - Calculate the power of a number.
 * @base: Base of the exponent.
 * @pow: Power of the exponent.
 *
 * Return: Value of base raised to the power.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	/* Iterate through each bit of the number */
	while (dev != 0)
	{
		result = n & dev;

		/* If the current bit is 1, set the flag and print '1' */
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			/* If the flag is set or we reach the least significant bit, print '0' */
			_putchar('0');
		}
		dev >>= 1; /* Move to the next bit position */
	}
}

