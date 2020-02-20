#include "holberton.h"


/**
 * print_number - prints int
 *
 * @n: num to print
 * Return: None
 */
void print_number(int n)
{
	int tmp;
	int num;
	int rev_num;
	int place;

	tmp = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (num != n)
	{
		num = _putchar(n / i % 10 + '0');
		i = i * 10;
	}
}
/*






	if (n < 9)
		_putchar(n + '0');
	if (n < 100 && n > 9)
	{
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n < 1000 && n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
        if (n > 1000)
	{
		_putchar(n / 1000 % 10 + '0');
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
*/
