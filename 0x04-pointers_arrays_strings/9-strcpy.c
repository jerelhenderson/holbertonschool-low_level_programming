#include "holberton.h"


int _strlen(char *s);

/**
 * _strcpy - copy string
 *
 * @dest: destination
 * @src: source
 * Return: *@dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char len;

	len = _strlen(src);

	i = 0;

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - return length of string
 *
 * @s: given string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
