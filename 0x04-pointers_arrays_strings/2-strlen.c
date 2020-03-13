#include "holberton.h"


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
