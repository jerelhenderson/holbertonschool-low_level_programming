#include "holberton.h"


/**
 * *cap_string - cap first letter of str
 *
 * @s: given string
 * Return: converted string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int delims[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[i] = s[i] - 32;

	while (s[i + 1] != '\0')
	{
		if (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
		{
			s[i] = ' ';
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
				i = i + 2;
			}
		}

		j = 0;

		while (j < 10)
		{
			if (s[i] == delims[j])
			{
				i++;
				if (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
					i++;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
					break;
				}
				else
					j = 0;
			}
			j++;
		}
		i++;
	}
	return (s);
}
