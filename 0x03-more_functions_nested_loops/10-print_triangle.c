#include "holberton.h"


/**
 * print_triangle - print triangle
 *
 * @size: triangle size
 * Return: None
 */
void print_triangle(int size)
{
	int i;
	int j;

	i = size;

	while (i < size)
	{
		j = i;
		while (j < size - 1)
		{
			_putchar(' ');
			j--;
		}
		_putchar('#');
		_putchar('\n');
		i--;
	}
	if (size == 0)
		_putchar('\n');

}
