#include "holberton.h"


/**
 * print_last_digit - Print last digit of number.
 *
 *@n: Inputted number.
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
	{
		num = num * (-1);
	}

	_putchar (num + '0');
	return (num);
}
