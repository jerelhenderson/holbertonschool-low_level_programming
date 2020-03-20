#include "holberton.h"


/**
 * rot13 - convert letters to rot13
 *
 * @s: given string
 * Return: converted string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char rpl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char with[] = "NOPQRSTUVQXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (rpl[j] != '\0')
		{
			if (s[i] == rpl[j])
			{
				s[i] = with[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
