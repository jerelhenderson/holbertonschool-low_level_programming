#include "holberton.h"

/**
 * clear_bit - sets value of bit
 *
 * @n: bit
 * @index: location
 * Return: 1 if yay, -1 if nay
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & (1 << index);
	return (1);
}
