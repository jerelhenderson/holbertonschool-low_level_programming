#include "function_pointers.h"


/**
 * int_index - function search for integer
 *
 * @array: given array
 * @size: size of given array
 * @cmp: pointer to function to execute
 * Return: -1 if size < 1 or no matching element, index of 1st matching element
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*array) == 1)
			return (i);
		array++;
	}
	return (-1);
}
