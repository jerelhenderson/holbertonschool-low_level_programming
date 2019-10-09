#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result
 *
 * @argc: count arguments
 * @argv: argument array
 * Return: 0, or 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
