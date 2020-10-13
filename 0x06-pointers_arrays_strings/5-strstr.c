#include "holberton.h"



/**
 * _strstr - locate substring
 *
 * @haystack: string to be searched
 * @needle: string to be found
 * Return: point to beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] == needle[i])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (needle);
		}
		i++;
	}
	return (NULL);
}
