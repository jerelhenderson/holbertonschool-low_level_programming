#include "holberton.h"

/**
 * swap_int - swap values of two ints
 *
 * @a: first int
 * @b: second int
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
