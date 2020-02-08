#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - uses random num generator
 *
 * Description: prints last digit and value of n
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;

	printf("Last digit of %d is %d ", n, lastDig);
	if (lastDig > 5)
		printf("and is greater than 5");
	if (lastDig == 0)
		printf("and is 0");
	if (lastDig < 6)
		printf("and is less than 6 and not 0");
	printf("\n");

	return (0);
}
