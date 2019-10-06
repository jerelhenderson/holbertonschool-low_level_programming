#include "holberton.h"


/**
 * is_prime_number - returns 1
 *
 * @n: integer type
 * @i: integer type
 * Return: 1 if prime
 */
int help(int n, int i);
int is_prime_number(int n)
{
	return (help(n, n / 2));
}

/**
 * help - prime or not
 *
 * @n: integer type
 * @i: integer type
 * Return: prime or nah
 */
int help(int n, int i)
{
	if (i < 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == 1)
		return (1);
	else
		return (help(n, i - 1));
}
