#include "holberton.h"

/**
 * flip_bits - number of bits to flip
 *
 * @n: first input
 * @m: second input
 * Return: return number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned long int temp;

	count = 0;
	temp = n ^ m;

	while (temp)
	{
		count = count + (count & 1);
		temp = temp >> 1;
	}
	return (count);
}
