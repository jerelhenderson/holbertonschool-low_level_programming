#include "holberton.h"


/**
 * main - print numbers
 *
 * Description: print nums 1 - 100
 * 3-multiples Fizz, 5-multiples Buzz, 3/5-multiples FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i++;
	}
	return (0);
}
