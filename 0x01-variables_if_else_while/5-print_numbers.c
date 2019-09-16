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
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
