#include <stdio.h>


/**
 * main - prime numbers
 *
 * Description: print largest prime number
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;
	long big;

	big = 2;
	while (num > 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			if (big < div)
				big = div;
		}

		else
			div++;
	}
	printf("%lu\n", big);
	return (0);
}
