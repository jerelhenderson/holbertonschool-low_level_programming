#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of times '\' prints
 * Return: None
 */
void print_diagonal(int n)
{
	int x, y;

	x = 0;

	while (n > 0)
	{
		y = x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
		n--;
	}
	if (x < 1)
		_putchar('\n');
}
