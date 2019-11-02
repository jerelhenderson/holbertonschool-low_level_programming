#include "lists.h"

/**
 * listint_len - element number
 *
 * @h: head pointer
 * Return: element number
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
