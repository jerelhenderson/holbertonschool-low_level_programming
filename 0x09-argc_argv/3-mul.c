#include "holberton.h"


/**
 * main - write program that multiplies two numbers
 *
 * @argc: count number of arguments
 * @argv: given argument
 * Return: 0, or 1 if more or less than two arguments received
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);

	return (0);
}
