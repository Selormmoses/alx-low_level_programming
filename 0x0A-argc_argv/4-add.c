#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: number of the arguments
 * @argv: array of the argument
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	int a, sum = 0
		for (a = 1; a < argc; a++)
		{
			if (*argv[a] < 49 || *argv[a] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[a]);
		}
	printf("%d\n", sum);
	return (0);
}
