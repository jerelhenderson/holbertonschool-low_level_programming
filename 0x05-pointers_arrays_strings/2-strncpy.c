#include "holberton.h"


/**
 * _strncpy - copy strings
 *
 * @dest: destination character string
 * @src: source character string
 * @n: bytes integer
 * Return: destination character string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
