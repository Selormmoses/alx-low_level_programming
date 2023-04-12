#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * _strdup - returns a pointer to a new sting
 * @str: char
 * Return: 0
 */

char *_strup(char *str)
{
	char *ccc;
	int i, r = 0;

	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ccc = malloc(sizeof(char) * (i + 1));
	if (ccc == NULL)
		return (NULL);

	for (r  = 0; str[r]; r++)
		ccc[r] = str[r];

	return (ccc);
}
