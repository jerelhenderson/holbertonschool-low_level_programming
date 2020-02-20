#include "holberton.h"

/**
 * print_numbers - print numbers
 *
 * Description: print numbers 0 - 9
 * Return: None
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
