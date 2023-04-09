#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed in it
 * @agrc: The number of argument
 * @argv: array of argument
 * Return: (Success) 0
 */

int main(int argc, char *argv[])
{
/* ignore argv */
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
