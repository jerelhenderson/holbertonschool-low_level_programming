#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
* main - uses rand num generator
*
* Description: detects pos, neg, zero value of num
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	if (n == 0)
		printf("zero\n");
	if (n < 0)
		printf("negative\n");

	return (0);
}
