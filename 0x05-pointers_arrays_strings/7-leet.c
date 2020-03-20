#include "holberton.h"


/**
 * *leet - converts str to 1337
 *
 * @s: given string
 * Return: converted string
 */
char *leet(char *s)
{
	int i;
	int j;
	char rpl[] = "aAeEoOtTlL";
	char with[] = "4433007711";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (rpl[j] != '\0')
		{
			if (s[i] == rpl[j])
			{
				s[i] = with[j];
				continue;
			}
			j++;
		}
		i++;
	}
	return (s);
}
