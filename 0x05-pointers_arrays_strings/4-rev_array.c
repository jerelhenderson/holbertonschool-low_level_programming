#include "holberton.h"

/**
 * reverse_array - reverses integer array
 *
 * @a: array
 * @n: number
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int start;
	int end;

	n -= 1;
	while (count < n)
	{
		start = a[i];
		end = a[count];
		a[i++] = end;
		a[count--] = start;
	}
}
