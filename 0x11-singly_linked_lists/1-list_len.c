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
	const list_t *position;

	n = 0;
	position = h;

	if (h == NULL)
	printf("[0] (nil)\n");

	while (position != NULL)
	{
		position = position->next;
		n++;
	}
	return (n);
}
