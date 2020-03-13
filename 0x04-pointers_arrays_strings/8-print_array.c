#include "holberton.h"


/**
 * print_array - print array contents
 *
 * @a: given array
 * @n: array elements to print
 * Return: Return
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i != n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
