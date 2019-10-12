#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concactenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to concactenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *space;
	int idx1, idx2;
	int cpy1, cpy2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	idx1 = 0;
	idx2 = 0;
	while (s1[idx1])
		idx1++;
	while (s2[idx2])
		idx2++;

	space = malloc((idx1 * sizeof(*s1)) + (idx2 * sizeof(*s2)));
	{
	if (space == NULL)
		return (NULL);
	}

	cpy1 = 0;
	cpy2 = 0;
	while (cpy1 < idx1 + idx2)
	{
		if (cpy1 < idx1)
			space[cpy1] = s1[cpy1];
		else
			space[cpy1] = s2[cpy2++];
	}
	return (space);
}
