#include "holberton.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int sub = 0;

	while (dest[index] != '\0')
		index++;

	while (src[sub] != '\0')
		dest[index++] = src[sub++];

	dest[index] = '\0';
	return (dest);
}
