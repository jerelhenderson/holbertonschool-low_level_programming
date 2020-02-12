#include <stdio.h>


/**
 * main - print numbers
 *
 * Description: print numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int tens;
	int ones;

	tens = 48;
	ones = 48;

	while (tens < 58)
	{
		while (ones < 58)
		{
			putchar(tens);
			putchar(ones);
			if (tens != 57 || ones != 57)
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		ones = 48;
		tens++;
	}
	putchar('\n');

	return (0);
}
