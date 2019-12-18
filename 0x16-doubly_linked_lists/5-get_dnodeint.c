#include "lists.h"

/**
 * get_dnodeint_at_index - finds node at index
 *
 * @head: head pointer
 * @index: index of node
 * Return: nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int itr;

	if (head == NULL)
		return (NULL);

	itr = 0;
	temp = head;

	while (itr != index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		itr++;
	}
	return (temp);
}
