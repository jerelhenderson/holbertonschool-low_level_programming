#include "function_pointers.h"


/**
 * array_iterator - execute function given as a parameter
 * on each array element
 *
 * @array: given array
 * @size: size of given array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*array++);
}
