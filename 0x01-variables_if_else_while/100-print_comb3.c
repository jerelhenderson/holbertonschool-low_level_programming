#include <stdio.h>


/**
 * main - print base10
 *
 * Description: print single digit nums from 0 in base10
 * Return: 0
 */
int main(void)
{
	int tens;
	int ones;

	tens = 48;

	while (tens < 58)
	{
		ones = 48;
		while (ones < 58)
		{
			if (tens < ones)
			{
				putchar(tens);
				putchar(ones);
				if (tens != 56 || ones != 57)
				{
					putchar(',');
					putchar(' ');
				}
				ones++;
			}
			else
				ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}
