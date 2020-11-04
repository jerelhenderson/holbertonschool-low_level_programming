#include "holberton.h"


/**
 * _strlen_recursion - recursive function returns string length
 *
 * @s: given string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int i = 1;

		return (i + _strlen_recursion(++s));
	}
	return (0);
}
