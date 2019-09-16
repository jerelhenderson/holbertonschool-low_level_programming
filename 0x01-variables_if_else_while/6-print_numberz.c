#include <stdio.h>

/**
 * main - Incoming
 *
 * Description: Print single digit numbers starting from 0.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
