#include "holberton.h"

/**
 * _strncpy - copy strings
 *
 * @dest: destination
 * @src: source
 * @n: integer type
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i != n)
				dest[i++] = '\0';
			break;
		}
		i++;
	}
	return (dest);
}
