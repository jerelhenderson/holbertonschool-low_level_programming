#include "holberton.h"
#include <stdio.h>


/**
 * print_diagsums - print sum of two diagonals of a square matrix
 *
 * @a: array of integers
 * @size: size of the array
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *a;
			if (j == size - 1 - i)
				sum2 = sum2 + *a;
			a++;
		}
	}
	printf("%u, %u\n", sum1, sum2);
}
