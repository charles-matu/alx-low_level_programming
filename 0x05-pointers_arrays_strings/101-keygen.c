#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_KEY_LENGTH 100

/**
 * generate_key - Generates a random key of specified length.
 * @length: The length of the key to generate.
 * @key: The array to store the generated key.
 */
void generate_key(int length, char key[])
{
	int i;

	srand((unsigned int)time(NULL));

	for (i = 0; i < length; i++)
	{
		key[i] = rand() % 26 + 'A'; /* Generate random uppercase letters */
	}

	key[length] = '\0';
}

/**
 * main - Entry point of the program.
 * Return: 0 on successful execution.
 */
int main(void)
{
	int keyLength = 10;
	char key[MAX_KEY_LENGTH];

	generate_key(keyLength, key);

	printf("Generated key: %s\n", key);

	return (0);
}

