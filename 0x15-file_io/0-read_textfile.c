#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: w- actual number of bytes to read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t q;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(fd, buf, letters);
	q = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(fd);
	return (q);
}
