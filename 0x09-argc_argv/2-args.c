#include <stdio.h>


/**
 * main - print all arguments it receives
 *
 * @argc: count arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
