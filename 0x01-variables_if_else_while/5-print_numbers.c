#include <stdio.h>


/**
 * main - print base10
 *
 * Description: print single digit nums from 0 in base10
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
