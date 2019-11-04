#include "holberton.h"

/**
 * get_bit - returns value of bit
 *
 * @n: bit
 * @index: location
 * Return: value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return(n >> index & 1);
}
