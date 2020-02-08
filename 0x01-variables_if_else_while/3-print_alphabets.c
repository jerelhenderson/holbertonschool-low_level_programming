#include <stdio.h>


/**
 * main - putchar function
 *
 * Description: print alphabet in lowercase, uppercase
 * Return: 0
 */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';

	while (lower != 'z' + 1)
	{
		putchar(lower);
		lower++;
	}
	while (upper != 'Z' + 1)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
