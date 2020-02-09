#include "holberton.h"


/**
 * _abs - prints absolute value
 *
 * @n: num before conversion
 * Return: num
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	n = n * -1;
	return (n);
}
