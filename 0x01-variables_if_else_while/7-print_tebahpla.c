#include <stdio.h>

/**
 * main - Incoming
 *
 * Description: Prints lowercase alphabet in reverse.
 *
 * Return: 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
