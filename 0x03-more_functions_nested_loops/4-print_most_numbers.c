#include "holberton.h"


/**
 * print_most_numbers - print numbers
 *
 * Description: prints numbers 0 - 9, excluding 2 and 4
 * Return: None
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 + '0' || i != 4 + '0')
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
