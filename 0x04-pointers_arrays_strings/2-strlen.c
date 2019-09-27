#include "holberton.h"

/**
 * _strlen - length of a string
 *
 * @s: char type
 * Return: returns the string length
 */

void _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
