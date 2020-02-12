#include "holberton.h"


void comma_space(int j, int n);
void double_space(void);
void hnds_place(int product);
void tens_place(int product);

/**
 * print_times_table - print times table
 *
 * @n: number given
 * Description: prints all times tables up to 15
 * Return: none
 */
void print_times_table(int n)
{
	int i = 0;

	if (n > 15 || n < 0)
		return;

	while (i < n + 1)
	{
		int j = 0;

		while (j < n + 1)
		{
			int product = j * i;

			if ((i * (j + 1)) == 0)
			{
				_putchar(product + '0');
				comma_space(j, n);
				double_space();
			}
			else
			{
				if (product > 99)
					hnds_place(product);
				else if (product > 9 && product < 100)
					tens_place(product);
				else
				{
					if (product != 0)
						double_space();
					_putchar(product + '0');
				}
				comma_space(j, n);
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}


/**
 * comma_space - putchar function
 *
 * @j: increment from primary function
 * @n: number given from primary function
 */
void comma_space(int j, int n)
{
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}


/**
 * double_space - putchar function
 *
 * Description: putchars two spaces
 */
void double_space(void)
{
	_putchar(' ');
	_putchar(' ');
}


/**
 * hnds_place - putchar function
 *
 * @product: product of ints from primary function
 * Description: separates hundreds, tens, ones places using putchar
 */
void hnds_place(int product)
{
	_putchar(product / 100 + '0');
	_putchar(product / 10 % 10 + '0');
	_putchar(product % 10 + '0');
}


/**
 * tens_place - putchar function
 *
 * @product: product of ints from primary function
 * Description: match hundreds place, separates tens, ones places using putchar
 */
void tens_place(int product)
{
	_putchar(' ');
	_putchar(product / 10 + '0');
	_putchar(product % 10 + '0');
}
