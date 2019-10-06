#include "holberton.h"

/**
 * _sqrt_recursion - return square root
 *
 * @n: integer type
 * Return: Return -1 if no square root, or
 * square root
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}


/**
 * help - help function
 *
 * @c: integer type
 * @i: integer type
 * Return: square root, or -1 if none
 */
int help(int c, int i)
	int help(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (help(n, i + 1));
}
