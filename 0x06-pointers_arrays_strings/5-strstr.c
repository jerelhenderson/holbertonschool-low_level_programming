#include "holberton.h"


/**
 * _strstr - locate substring
 * @haystack: string
 * @needle: string's substring
 * Return: point to beginning of substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int idx1;
	int idx2;
	int holder;

	idx1 = 0;
	while (haystack[idx1] != '\0')
	{
		holder = idx1;
		for (idx2 = 0; needle[idx2] != '\0'; idx2++)
		{
			if (haystack[holder] == needle[idx2])
				holder++;
			else
				break;
		}
		if (needle[idx2] == '\0')
			return (&haystack[idx1]);
		idx1++;
	}
	return ('\0');
}
