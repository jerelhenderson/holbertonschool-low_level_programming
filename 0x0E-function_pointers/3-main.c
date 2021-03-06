#include "3-calc.h"

/**
 * main - receives arguments to pass to 3-get_op_function.c
 *
 * @argc: count number of arguments
 * @argv: array of given arguments
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	math = get_op_func(argv[2]);
	if (math == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", math(a, b));
	return (0);
}
