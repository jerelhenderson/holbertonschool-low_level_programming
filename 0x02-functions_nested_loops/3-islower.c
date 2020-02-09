#include "holberton.h"


/**
 * _islower - check for lowercase char
 *
 * @c: lowercase int
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
