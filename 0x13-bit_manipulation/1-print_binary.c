#include "holberton.h"

/**
 * print_binary - prints base2 of base10
 *
 * @n: inputted integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
