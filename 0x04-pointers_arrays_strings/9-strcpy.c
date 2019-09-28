#include "holberton.h"


/**
 * _strcpy - copy string
 *
 * @dest: destination
 * @src: source
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
		length++;

	i = 0;

	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[length] = '\0';
	return(dest);
}
