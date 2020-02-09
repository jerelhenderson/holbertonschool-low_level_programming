#include "holberton.h"


/**
 * _islower - check for lowercase, uppercase char
 *
 * @c: lowercase, or upperchase int
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}
