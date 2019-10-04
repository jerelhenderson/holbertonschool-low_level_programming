#include "holberton.h"
#include <stdio.h>


/**
 * print_diagsums - print sum of two diagonals of a square matrix
 * @a: integers
 * @size: size
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int row, col, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum1 = sum1 + *a;
			if (col == size - 1 - row)
				sum2 = sum2 + *a;
			a++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
