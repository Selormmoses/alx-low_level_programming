#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet
 * followed by anew line
 * Return: Always 0
 */

void print_alphabet_x10(void)

{
	char c;
	int i = 9;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
			i++;
		}
	}
}
