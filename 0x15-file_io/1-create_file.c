#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates file.
 * @filename: Pointer to the name of file to create.
 * @text_content: Pointer to a string to write.
 * Return: Function fails - -1,
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ld, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(ld, text_content, len);

	if (ld == -1 || q == -1)
		return (-1);

	close(ld);

	return (1);
}
