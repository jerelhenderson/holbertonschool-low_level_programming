#include "holberton.h"

/**
 * string_toupper - lowercase chars to uppercase
 *
 * @s: string to uppercase
 * Return: capital string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
