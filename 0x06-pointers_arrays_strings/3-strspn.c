#include "holberton.h"


/**
 * _strspn - get length of a prefix substring
 *
 * @s: string to be checked
 * @accept: characters to check for
 * Return: number of bytes in from 'accept' in 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (count);
}
