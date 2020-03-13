#include "holberton.h"


/**
 * print_rev - print reversed string
 *
 * @s: given string
 * Return: None
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
