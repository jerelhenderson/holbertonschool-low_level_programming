#include "holberton.h"

/**
 * puts2 - print every other char
 *
 *@str: character type
 * Return: None
 */
void puts2(char *str)
{
	int count = 0;
	int temp;

	while (str[count])
	{
		count++;
	}
	for (temp = 0; temp < count; temp += 2)
		_putchar(str[temp]);
	_putchar('\n');
}
