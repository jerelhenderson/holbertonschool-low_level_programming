 #include "holberton.h"

/**
 * puts_half - print half a string
 *
 * @str: char type
 * Return: None
 */
void puts_half(char *str)
{
	int length;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = length / 2;
	if (length % 2 != 0)
		half = (length - 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}
	_putchar('\n');
}
