#include "holberton.h"

/**
 * rev_string - return reverse string
 *
 *@s: character type
 * Return: None
 */
void rev_string(char *s)
{
	int count;
	int temp1;
	int doggy;
	char temp2;

	count = 0;
	while (s[count])
	{
		count++;
	}

	temp1 = count / 2;
	doggy = count - 1;
	count = 0;

	while (count < temp1)
	{
		temp2 = s[doggy];
		s[doggy] = s[count];
		s[count] = temp2;
		count++;
		doggy--;
	}
}
