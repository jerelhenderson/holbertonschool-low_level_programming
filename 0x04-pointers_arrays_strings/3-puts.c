#include "holberton.h"

/**
 * _puts - copies "puts" function
 *
 * @str: char type
 * Return: None
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
