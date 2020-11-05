#include "holberton.h"


int prime_it(int n, int i);

/**
 * is_prime_number - function finds prime number
 *
 * @n: given integer
 * Return: result of `prime_it`
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n == 1)
		return (0);
	return (prime_it(n, 2));
}

/**
 * prime_it - checks if number prime or not
 *
 * @n: given number
 * @i: counter number
 * Return: 1 if int is prime, 0 if not
 */
int prime_it(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_it(n, i + 1));
}
