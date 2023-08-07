#include "main.h"

/**
 * _strlen - Calculate string length.
 * @str: Input string.
 * Return: Length of the string.
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - Append text to end of file.
 * @filename: Name of the file.
 * @text_content: Text to add.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Write text_content to the file */
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));

	close(fd);

	/* Check for write errors */
	if (len == -1)
		return (-1);

	return (1);
}

