#include "holberton.h"


/**
 * jack_bauer - print every minute of the day
 *
 * Description: prints every minute from 00:00 - 23:59
 * Return: none
 */
void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			min++;
			_putchar('\n');
		}
		hr++;
	}
}
