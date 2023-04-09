#include "main.h"
#include <stdio.h>

/**
 * main - to print the name of a program
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: Always (Success) 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
