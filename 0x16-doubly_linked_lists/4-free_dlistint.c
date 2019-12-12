#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
		free(head);
	}
}
