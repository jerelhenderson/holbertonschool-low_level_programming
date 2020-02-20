#include "holberton.h"

/**
 * _isdigit - check if digit
 *
 * @c: variable to check
 * Return: 1 if yay, 0 if nay
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
