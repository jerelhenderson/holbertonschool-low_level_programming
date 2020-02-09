#include "holberton.h"


/**
 * print_sign - print sign of num
 *
 * @n: sign of num
 * Return: 1 if +, -1 if -, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
