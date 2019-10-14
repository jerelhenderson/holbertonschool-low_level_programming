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
	int x;

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

	x = idx1 + idx2;
	printf("%d\n", x);

	space = malloc(16);
	if (space == NULL)
		return (NULL);
	printf("First: %d Second: %d Allocated: %lu", idx1, idx2, sizeof(space));

/**
        idx1 = 0;
	while (s1[idx1] != '\0')
	{
		s1[idx1] = space[idx1];
		idx1++;
	}
	printf("Boo here: %d", s1[idx1]);

	idx2 = 0;
	while (s2[idx2] != '\0')
	{
	       s2[idx2] = space[idx1];
	       idx2++;
	       idx1++;
	}
**/
	space[idx1] = '\0';
	return (space);
}
