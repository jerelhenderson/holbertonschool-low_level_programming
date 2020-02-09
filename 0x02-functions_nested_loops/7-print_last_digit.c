#include "holberton.h"


/**
 * print_last_digit - print last num digit
 *
 * @n: input num
 * Return: last digit
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = n * -1;
	num = n % 10;
	_putchar(num + '0');

	return (num);
}
