#include "holberton.h"


/**
 * _strchr - find character
 * @s: pointer to char
 * @c: char to find
 * Return: NULL if char not found, pointer to first occurrence of 'c'
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
