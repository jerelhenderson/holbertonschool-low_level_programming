#include <stdio.h>
#include "holberton.h"


/**
 * print_to_98 - print natural numbers to 98
 *
 * @n: starting num
 * Return: none
 */
void print_to_98(int n)
{
	if (n > 97)
	{
		while (n != 97)
		{
			printf("%d", n);
			n--;
			if (n != 97)
				printf(", ");
		}
		putchar('\n');
	}
	else if (n < 99)
	{
		while (n != 99)
		{
			printf("%d", n);
			n++;
			if (n != 99)
				printf(", ");
		}
		putchar('\n');
	}
}
