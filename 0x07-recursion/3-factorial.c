#include "holberton.h"


/**
 * factorial - return factorial of a given number
 *
 * @n: number used as factorial
 * Return: factorial, or -1 if 'n' is below 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)	
		return (n * factorial(n - 1));
	return (1);
}
