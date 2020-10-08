#include "holberton.h"


/**
 * _strpbrk - search string for bytes
 *
 * @s: string to search through
 * @accept: string to match
 * Return: point to byte in 's' that matches a byte in 'accept', or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	
	char *pos;

	i = 0;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				pos = s;
				return (pos);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}

