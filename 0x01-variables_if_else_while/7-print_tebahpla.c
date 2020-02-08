#include <stdio.h>


/**
 * main - putchar function
 *
 * Description print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int alpha;

	alpha = 'z';
	while (alpha != 'a' - 1)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
