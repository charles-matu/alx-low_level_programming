#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	int sign = 1;
	int is_num = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			sign *= -1;
		}

		while (s[c] >= '0' && s[c] <= '9')
		{
			is_num = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}

		if (is_num == 1)
		{
			break;
		}

		c++;
	}

	num *= sign;
	return (num);
}

