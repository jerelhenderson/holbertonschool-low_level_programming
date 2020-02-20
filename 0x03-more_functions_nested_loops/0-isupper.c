#include "holberton.h"


/**
 * _isupper - check if uppercase
 *
 * @c: variable to check
 * Return: 1 if yay, 0 if nay
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
