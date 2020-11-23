#include "holberton.h"


int _strlen(char *s);

/**
 * argstostr - function concatenates all args in program
 *
 * @ac: count number of args
 * @av: given arg(s)
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, m;
	int char_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
		char_len = char_len + (_strlen(av[m]) + 1);

	arr = malloc((char_len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	m = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[m] = av[i][j];
			m++;
		}
		arr[m] = '\n';
		m++;
	}
	arr[m] = '\0';
	return (arr);
}

/**
 * _strlen - return length of string
 *
 * @s: given string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);

}
