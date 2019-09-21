#include "holberton.h"


/**
 * times_table - print times table
 *
 * Description: Print a times table, using 9
 * Return: Always 0.
 */
void times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z < 10 && y != 0)
			{
				_putchar(' ');
				_putchar('0' + z);
			}
			else if (z > 9)
			{
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
			}
			else
			{
				_putchar('0' + z);
			}
			y++;
		}
		x++;
		_putchar('\n');
	}
}
