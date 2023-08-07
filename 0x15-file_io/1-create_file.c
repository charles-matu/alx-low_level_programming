#include "main.h"
/**
 * create_file - Creates a file & writes content.
 * @t: A NULL terminated string to write.
 * @fn: The name of the file to create.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *fn, char *t)
{
	int o, w, len = 0;

	if (fn == NULL)
		return (-1);

	if (t != NULL)
	{
		for (len = 0; t[len];)
			len++;
	}

	o = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600); /* Create file */
	w = write(o, t, len); /* Write content to the file */

	/* Check for errors */
	if (o == -1 || w == -1)
		return (-1);

	close(o); /* Close the file */

	return (1);
}

