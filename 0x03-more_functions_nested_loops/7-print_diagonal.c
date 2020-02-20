#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: number of times '\' prints
 * Return: None
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;

	while (i < n)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n < 1)
		_putchar('\n');
}
