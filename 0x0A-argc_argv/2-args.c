#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 * @argc: prints all arguments
 * @argv: prints progarm arrays
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
