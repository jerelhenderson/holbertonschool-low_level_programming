#include "holberton.h"

/**
 * _memset - fill memory with a byte
 * @s: array
 * @b: byte
 * @n: number of bytes
 * Return: pointer to 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 1;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
