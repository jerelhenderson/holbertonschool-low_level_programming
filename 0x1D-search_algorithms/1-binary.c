#include "search_algos.h"


void search_array(int *array, size_t beg, size_t end);

/**
 * binary_search - function searches for value in sorted array of ints
 *
 * @array: given array
 * @size: elements in array
 * @value: value to locate
 * Return: index where value is begcated, -1 if NULL or not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg;
	size_t end;
	size_t mid;

	if (array == NULL)
		return (-1);

	beg = 0;
	end = size - 1;

	while (beg <= end)
	{
		mid = (end + beg) / 2;

		search_array(array, beg, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] >= value)
		{
		        mid = mid - 1;
			end = mid;
		}
		else if (value >= array[mid])
		{
			mid = mid + 1;
			beg = mid;
		}
	}
	return (-1);
}


/**
 * search_array - function searches and prints array
 *
 * @beg: beginning of array sequence
 * @end: end of array sequence
 */
void search_array(int *array, size_t beg, size_t end)
{
	printf("Searching in array: ");
	while (beg != end)
	{
		printf("%i, ", array[beg]);
		beg++;
	}
	printf("%i\n", array[beg]);
}
