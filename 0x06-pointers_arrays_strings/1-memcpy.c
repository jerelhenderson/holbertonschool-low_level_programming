#include "holberton.h"


/**
 * _memcpy - copy memory
 * @dest: copy to
 * @src: copy from
 * @n: integer type
 * Return: pointer to `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;

	ptr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}
