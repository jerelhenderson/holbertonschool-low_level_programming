#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of parameters
 *
 * @n: integers input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int itr;
	int sum;

	if (n == 0)
		return (0);

	itr = 0;
	sum = 0;
	va_start(arguments, n);

	while (itr < n)
	{
		sum = sum + va_arg(arguments, int);
		itr++;
	}
	va_end(arguments);
	return (sum);
}
