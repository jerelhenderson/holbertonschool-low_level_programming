#include "holberton.h"
#include <stdio.h>
/**
 * *leet - word converter
 *
 * @s: string
 * Return: converted text
 */
char *leet(char *s)
{
	int index;
	int replace;
	char *s2 = "E3e3A4a4L1l1T7t7O0o0";

	index = 0;
	while (s[index] != '\0')
	{
		replace = 0;
		while (s2[replace] != '\0')
		{
			if (s[index] == s2[replace])
			{
				replace++;
				s[index] = s2[replace];
				break;
			}
			replace = replace + 2;
		}
		index++;
	}
	return (s);
}
