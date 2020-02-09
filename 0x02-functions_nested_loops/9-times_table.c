#include "holberton.h"


/**
 * times_table - print times table
 *
 * Description: print 9*9 times table
 * Return: none
 */
void times_table(void)
{
	int product;
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = j * i;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
