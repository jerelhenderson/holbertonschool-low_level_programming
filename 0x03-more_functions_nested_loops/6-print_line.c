#include "holberton.h"

/**
 * print_line - straight line
 *
 *@n: number of times n prints
 * Return: None
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
