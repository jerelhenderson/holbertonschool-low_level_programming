#include "holberton.h"

/**
 * set_bit - sets bit value
 *
 * @n: bit
 * @index: location
 * Return: 1 if yay, -1 if nay
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
