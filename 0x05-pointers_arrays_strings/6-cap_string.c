#include "holberton.h"


/**
 * *cap_string - cap first letter of str
 *
 * @s: given string
 * Return: converted string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int delims[] = {'\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	i = 0;
	j = 0;

	while (s[i + 1] != '\0')
	{
		if (s[i] == 32)
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (s[i] == '\t')
		{
			s[i] = ' ';
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		while (delims[j] != '\0')
		{
			if (s[i] == delims[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
