#include <stdio.h>

/**
 * main - Prints the size of various types based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %lu byte(s0\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
