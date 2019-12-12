#include "holberton.h"


/**
 * _abs - Print absolute value.
 *
 *@n: Number before conversion.
 * Return: Number.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
