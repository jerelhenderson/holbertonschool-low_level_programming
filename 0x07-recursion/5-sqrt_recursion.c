#include "holberton.h"


int square_it(int a, int b);

/**
 * _sqrt_recursion - return natural square root of number
 *
 * @n: received number
 * Return: square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (square_it(n, 1));
}

/**
 * square_it - performs recursion to get square root of 'n'
 *
 * @a: number to get square root of
 * @b: number to stop dividing at
 * Return: square root
 */
int square_it(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (square_it(a, b + 1));
}
