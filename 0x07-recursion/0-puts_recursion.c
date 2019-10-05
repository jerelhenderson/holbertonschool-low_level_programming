#include "holberton.h"


/**
 * _puts_recursion - write function
 *
 * @s: character type
 * Return:
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
