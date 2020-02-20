#include "holberton.h"


/**
 * main - prime numbers
 *
 * Description: print largest prime number
 * Return: 0
 */
int main(void)
{
	long num = 1231952; /* 612852475143; */
	int i;

	i = 2;

	while (num != 1)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
