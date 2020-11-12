#include "holberton.h"


/**
 * main - print number of passed arguments
 *
 * @argc: count number of arguments
 * @argv: given arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
