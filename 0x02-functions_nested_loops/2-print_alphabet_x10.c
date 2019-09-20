#include "holberton.h"


/**
 * print_alphabet_x10 - Print alphabet ten times.
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
