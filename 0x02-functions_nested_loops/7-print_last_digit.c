#include "main.h"

/**
 * print_last_digit - Prints the last digits of a number
 * @n: The number to be treated
 * Return: value of the llast digit of number
 */

int printLast_digit(int n)

{
	int last;

	last = n % 10;
		if (last < 0)
		{
	
			last = last * -1;
		}
	_putchar(last + '0');
	return (last);
}
