#include "holberton.h"

/**
 * print_alphabet - Print alphabet.
 *
 * Return: None
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
