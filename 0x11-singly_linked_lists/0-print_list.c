#include  "lists.h"


/**
 * print_list - print elements
 *
 * @h: reference position
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int n;
	const list_t *position;

	n = 0;
	position = h;

	if (h == NULL)
	printf("[0] (nil)\n");

	while (position != NULL)
	{
		printf("[%d] %s\n", position->len, position->str);
		position = position->next;
		n++;
	}
	return (n);
}
