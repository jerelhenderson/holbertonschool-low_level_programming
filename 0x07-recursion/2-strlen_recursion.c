#include "holberton.h"


/**
 * _strlen_recursion - write a function that returns string length
 *
 * @s: character type
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
