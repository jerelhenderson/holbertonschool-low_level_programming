#include "holberton.h"


/**
 * print_alphabet_x10 - function that prints alphabet ten times
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
