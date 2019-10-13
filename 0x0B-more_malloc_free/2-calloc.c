#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - allocate memory for array
 * @nmemb: values in array
 * @size: size of data type
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int idx;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);
  i = 0;
  while (i <nmemb * size)
  {
    arr[idx] = 0;
    idx++;
  }
	return (arr);
}
