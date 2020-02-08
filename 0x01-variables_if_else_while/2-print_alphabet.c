#include <stdio.h>


/**
 * main - putchar function
 *
 * Description print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int alpha;

	alpha = 'a';
	while (alpha != 'z' + 1)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
