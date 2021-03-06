#include "lists.h"

/**
 * free_listint - free malloc'd space
 *
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
