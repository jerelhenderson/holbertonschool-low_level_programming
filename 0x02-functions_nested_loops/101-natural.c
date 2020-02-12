#include "holberton.h"


/**
 * main - compute and sum multiples
 *
 * Description: compute, print sums of multiples of 3 & 5
 * Return: 0
 */
int main(void)
{
	int i = 1023;
	int sum = 0;

	while (i > 0)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i--;
	}
	printf("%d\n", sum);

	return (0);
}
