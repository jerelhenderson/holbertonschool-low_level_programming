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
	int i;
	int tmp;
	int m; /* holds `n` */

	i = 0;
	m = n;

	while (i != m / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		i++;
	}
}
