#include "holberton.h"


/**
 * _strchr - locate a character in a string
 *
 * @s: given string
 * @c: `char` to find
 * Return: NULL if `char` not found, first occurrence of 'c'
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
