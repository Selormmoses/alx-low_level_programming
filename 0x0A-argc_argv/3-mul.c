#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiples two numbers
 * @argc: print all rguments
 * @argv: argument arrays
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	int a1 = 0, a2 = 0;

	if (argc == 3)
	{
		a1 = atoi(argv[1]);
		a2 = atoi(argv[2]);
		printf("%d\n", a1 * a2);
	}
	else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
