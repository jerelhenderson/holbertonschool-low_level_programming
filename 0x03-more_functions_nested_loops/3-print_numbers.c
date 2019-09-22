#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Description: prints numbers using custom function
 * Return: None
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
