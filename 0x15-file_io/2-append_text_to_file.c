#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to name of a file.
 * @text_content: String to add to file.
 * Return: Fail or filename is NULL - -1, otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lens);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}