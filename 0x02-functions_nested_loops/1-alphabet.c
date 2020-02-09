#include "holberton.h"


/**
 * print_alphabet - function that prints alphabet
 *
 * Return: None
 */
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha < 'z' + 1)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
