#include "holberton.h"


/**
 * _memcpy - copy memory
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n != 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
