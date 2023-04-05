#include "main.h"

/**
 * factorial - returns number
 * @n: return number to factorial form
 *
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n *factorial(n - 1));
}
