#include "holberton.h"


void calculator(int *total, int coin, int *count);

/**
 * main - prints minimun number of coins to make change for given amount
 *
 * @argc: count number of arguments
 * @argv: given argument
 * Return: 1 if argc != 1, 0 if is argv[1] > 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);
	int min_num = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	if (amount >= 25)
		calculator(&amount, 25, &min_num);
	if (amount >= 10)
		calculator(&amount, 10, &min_num);
	if (amount >= 5)
		calculator(&amount, 5, &min_num);
	if (amount >= 2)
		calculator(&amount, 2, &min_num);
	if (amount == 1)
		calculator(&amount, 1, &min_num);

	printf("%d\n", min_num);

	return (0);
}

/**
  * calculator - calculates the amount based on given input
  *
  * @total: amount left to calculate
  * @coin: coin to subtract from amount
  * @count: counted coins
  */
void calculator(int *total, int coin, int *count)
{
	while (*total >= coin)
	{
		*total -= coin;
		*count = *count + 1;
	}
}
