#include  "lists.h"


/**
 * list_len - print elements
 *
 * @h: reference position
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (0);
		else
			h = h->next;
		n++;
	}
	return (n);
}
