#include "holberton.h"

/**
 * print_line - draw line
 *
 *@n: number of times n prints
 * Return: None
 */
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
