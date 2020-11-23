#include "holberton.h"


/**
 * _strdup - returns pointer to newly allocated memory space
 *
 * @str: given string
 * Return: pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	ptr = malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
