#include "holberton.h"


/**
 * main - print all received arguments
 *
 * @argc: count number of arguments
 * @argv: given arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
