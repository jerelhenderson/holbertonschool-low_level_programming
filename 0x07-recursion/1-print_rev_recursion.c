#include "holberton.h"


/**
 * _print_rev_recursion - recursive function that prints in reverse
 *
 * @s: given string
 * Return: None
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
