#include <stdio.h>


/**
 * main - print the num of args you passed to it
 *
 * @argc: count arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
