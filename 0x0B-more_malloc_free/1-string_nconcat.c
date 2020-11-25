#include "holberton.h"


int _strlen(char *s);

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: first given string
 * @s2: second given string
 * @n: bytes from s2
 * Return: pointer to malloc'd space, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	signed int n_copy = n;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n_copy >= _strlen(s2))
		len = _strlen(s1) + _strlen(s2) + 1;
	else
		len = _strlen(s1) + n;

	ptr = malloc(len * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	j = i;
	for (i = 0; j < len; j++)
	{
		ptr[j] = s2[i];
		i++;
	}
	return (ptr);
}

/**
 * _strlen - return length of string
 *
 * @s: given string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
