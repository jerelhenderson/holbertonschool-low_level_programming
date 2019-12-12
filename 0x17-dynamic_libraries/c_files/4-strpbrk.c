#include "holberton.h"


/**
 * _strpbrk - search string for bytes
 * @s: string
 * @accept: string to match
 * Return: point to byte in 's' that matches a byte in 'accept', or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int length, index;
	char *p;

	length = 0;
	while (s[length] != '\0')
	{
		index = 0;
		while (accept[index] != '\0')
		{
			if (accept[index] == s[length])
			{
				p = &s[length];
				return (p);
			}
			index++;
		}
		length++;
	}
	return (0);
}
