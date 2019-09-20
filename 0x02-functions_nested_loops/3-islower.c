#include "holberton.h"


/**
 * _islower - Checks for lowercase alphabetic character.
 *
 *@c: Lowercase 'int.'
 * Return: 1 if true, 0 if false
 */
void _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
