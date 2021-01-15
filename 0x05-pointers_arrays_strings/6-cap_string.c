#include "holberton.h"


/**
 * *cap_string - cap first letter of str
 *
 * @s: given string
 * Return: converted string
 */
char *cap_string(char *s)
{
	int i, j;
	int delims[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;

	while (s[i + 1] != '\0')
	{
		if (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
		{
			s[i] = ' ';
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				i++;
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
			}
			j++;
		}
		i++;
	}
	return (s);
}
