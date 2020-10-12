#include "holberton.h"


/**
 * reverse_array - reverse integer array
 *
 * @a: given array
 * @n: element number
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j--;
		i++;
	}
}
