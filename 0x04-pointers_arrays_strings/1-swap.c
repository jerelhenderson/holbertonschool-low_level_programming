#include "holberton.h"

/**
 * swap_int - swap values
 *
 * @a: integer type
 * @b: intger type
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
