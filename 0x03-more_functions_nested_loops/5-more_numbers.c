#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 - 14, 10 times
 *
 * Description: prints numbers using custom function
 * Return: None
 */
void more_numbers(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
			{
				_putchar('0' + y / 10);
			}
			_putchar('0' + y % 10);
			y++;
		}
		x++;
		_putchar('\n');
	}
}
