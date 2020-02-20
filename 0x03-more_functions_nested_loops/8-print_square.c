#include "holberton.h"


/**
 * print_square - print square
 *
 * @size: square size
 * Return: None
 */
void print_square(int size)
{
	int i;
	int j;

	i = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');

}
