#include "holberton.h"


int _strlen(char *s);

/**
 * str_concat - function concatenates two strings
 *
 * @s1: first given string
 * @s2: second given string
 * Return: pointer to alloc'd memory space of concatenated `s1` + `s2`, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2) + 1;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

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
