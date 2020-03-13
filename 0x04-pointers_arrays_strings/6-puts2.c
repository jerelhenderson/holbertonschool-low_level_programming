#include "holberton.h"


/**
 * puts2 - print every other character in string
 *
 * @str: given string
 * Return: None
 */
void puts2(char *str)
{
	int i = 0;
	char copy;

	while (str[i])
	{
		copy = str[i];
		_putchar(copy);
		i = i + 2;
	}
	_putchar('\n');
}
