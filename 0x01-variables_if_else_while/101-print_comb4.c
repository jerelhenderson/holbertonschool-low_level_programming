#include <stdio.h>


/**
 * main - print number combos
 *
 * Description: print triple digit number combinations
 * Return: 0
 */
int main(void)
{
	int hnds;
	int tens;
	int ones;

	hnds = 48;
	tens = 48;
	ones = 48;

	while (hnds < 58)
	{
		tens = 48;
		while (tens < 58)
		{
			ones = 48;
			while (ones < 58)
			{
				if (hnds < tens && tens < ones)
				{
					putchar(hnds);
					putchar(tens);
					putchar(ones);
					if (hnds != 55 || tens != 56)
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
		hnds++;
	}
	putchar('\n');

	return (0);
}
