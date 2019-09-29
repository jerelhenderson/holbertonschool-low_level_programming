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
	int index = 0;
	int start;
	int end;

	n -= 1;
	while (index < n)
	{
		start = a[index];
		end = a[n];
		a[index++] = end;
		a[n--] = start;
	}
}
