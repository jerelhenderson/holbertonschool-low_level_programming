#include "holberton.h"


/**
 * _pow_recursion - recurse value of 'x' raised to power of 'y'
 *
 * @x: value given
 * @y: power to raise to
 * Return: x to power of y, or -1 if 'y' < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
