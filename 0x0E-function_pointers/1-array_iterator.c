#include "function_pointers.h"


/**
 * array_iterator - execute function given as a parameter
 * on each array element
 *
 * @array: array holding integers
 * @size: size of array
 * @action: pointer to function
 * Return: check for NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	idx = 0;

	while (idx < size)
	{
		action(array[idx]);
		idx++;
	}
}
