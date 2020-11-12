#include "holberton.h"


int error_msg(void);

/**
 * main - write program that adds two numbers
 *
 * @argc: count number of arguments
 * @argv: given argument
 * Return: 0, or 1 if more or less than two arguments received
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i = 1;
	char *p;

	if (argc < 3)
		return (printf("0\n"));

	while (i < argc)
	{
		res = res + strtol(argv[i], &p, 10);
		if (*p != '\0')
			return (error_msg());
		i++;
	}
	printf("%d\n", res);

	return (0);
}

/**
  * error_msg - prints error message if incorrect input is given
  *
  * Return: 1
  */
int error_msg(void)
{
	printf("Error\n");
	return (1);
}
