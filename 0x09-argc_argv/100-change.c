#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum coins
 *
 * @argc: count arguments
 * @argv: argument array
 * Return: 1, or 0
 */
int main(int argc, char *argv[])
{
	int amount;
	int count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	while (amount >= 25)
	{
		count++;
		amount -= 25;
	}
	while (amount >= 10)
	{
		count++;
		amount -= 10;
	}
	while (amount >= 5)
	{
		count++;
		amount -= 5;
	}
	while (amount >= 2)
	{
		count++;
		amount -= 2;
	}
	if (amount == 1)
		count++;
	printf("%d\n", count);

	return (0);
}
