#include "lists.h"

/**
 * get_nodeint_at_index - finds node at index
 *
 * @head: pointer to head
 * @index: index of node
 * Return: nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int itr;

	if (head == NULL)
		return (NULL);

	itr = 0;
	temp = head;

	while (itr != index)
	{
		temp = temp->next;
		itr++;
		temp = head;
	}
	return (head);
}
