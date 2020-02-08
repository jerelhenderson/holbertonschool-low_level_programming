#include <stdio.h>


/**
 * main - print base10
 *
 * Description: print single digit nums from 0 in base10, using putchar
 * Return: 0
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
