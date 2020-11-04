#include "holberton.h"


/**
 * _puts_recursion - print string using recursion
 *
 * @s: given string
 * Return: None
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
