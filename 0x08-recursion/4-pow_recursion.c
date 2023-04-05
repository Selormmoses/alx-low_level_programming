#include "main.h"

/**
 * _pow__recursion - returns value x to power y
 * @x: value raise
 * @y: to y power
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
