#include "holberton.h"


/**
 * _atoi - convert string to int
 *
 * @s: given string
 * Return: 0
 */
int _atoi(char *s)
{
	int i;

	i = 0;

	while (i != '\0')
	{
		printf("%d\n", s[i]);
		i++;
	}
	return (0);
}
