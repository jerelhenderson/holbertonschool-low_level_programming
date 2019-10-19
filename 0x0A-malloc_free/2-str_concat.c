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
	int cpy1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	idx1 = 0;
	idx2 = 0;
	while (s1[idx1] != '\0')
		idx1++;
	while (s2[idx2] != '\0')
		idx2++;

	space = malloc((idx1 + idx2) * sizeof(char));
	if (space == NULL)
		return (NULL);

        cpy1 = 0;
	idx1 = 0;
	while (s1[idx1] != '\0')
	{
		space[cpy1] = s1[idx1];
		idx1++;
		cpy1++;
	}

 	idx1 = 0;
	while (s2[idx1] != '\0')
	{
	       space[cpy1] = s2[idx1];
	       idx1++;
	       cpy1++;
	}
	space[cpy1] = '\0';
	return (space);
}
