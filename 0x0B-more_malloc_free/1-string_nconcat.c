#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - get string length
 *
 * @s: character type
 * Return: 1
 */
 
 
int _strlen(char *s)
{
	int lngth;

	lngth = 0;
	while (s[lngth] != '\0')
		lngth++;
	return (l);
}

/**
 * string_nconcat - concat two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx1, idx2, count;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count = _strlen(s1) + 1 + n;

	ptr = malloc(count * sizeof(char)) + '\0';
	if (ptr == NULL)
		return (NULL);

  idx1 = 0;
  while (s1[idx1] != '\0')
	{
		ptr[idx1] = s1[idx1];
    idx1++;
	}
  idx2 = 0;
	while (idx2 < n)
	{
		ptr[idx1] = s2[idx2];
    idx1++;
    idx2++;
	}
	return (ptr);
}
