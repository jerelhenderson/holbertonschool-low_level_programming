#include "holberton.h"


/**
 * _memset - fill memory with a byte
 *
 * @s: array
 * @b: byte
 * @n: number of bytes
 * Return: pointer to 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
