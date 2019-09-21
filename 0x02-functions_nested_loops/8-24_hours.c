#include "holberton.h"


/**
 * jack_bauer - 24
 *
 * Description: Prints seconds in 00:00 format
 * Return: Not sure yet.
 */
void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
