#include "holberton.h"


/**
 * _strspn - search a string for bytes
 * @s: char string
 * @accept: char bytes
 * Return: bytes in 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int length;
	int index;
	int counter;

	i = 0;
	counter = 0;
	while (s[length] != '\0')
	{
		index = 0;
		while (accept[index] != '\0')
		{
			if (s[length] == accept[index])
			{
				counter++;
				break;
			}
			j++;
		}
		if (accept[index] == '\0')
			break;
		length++;
	}
	return (counter);
}
