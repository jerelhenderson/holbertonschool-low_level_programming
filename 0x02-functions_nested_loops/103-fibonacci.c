#include "holberton.h"


void comma_space(void);

/**
 * main - Fibonacci sequencer
 *
 * Description: prints first fifty Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int num = 1;
	int curr = 1;
	int prev = 1;
	int sum = 0;

	while (num < 4000000)
	{
		prev = curr;
		curr = num;
		num = curr + prev;
		if (num % 2 == 0)
			sum = sum + num;
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
