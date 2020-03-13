#include "holberton.h"


int (_strlen)(char *s);

/**
 * puts_half - print half a string
 *
 * @str: given string
 * Return: None
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);

	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i++;
	}
	else
		i = len / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
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
