#include "holberton.h"

/**
 * print_square - prints a square
 *
 * @size: square size
 * Return: None
 */
void print_square(int size)
{
	int x = 0;
	int y;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
