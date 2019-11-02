#include "lists.h"

/**
 * pop_listint - deletes head node
 *
 * @head: pointer to head node
 * Return: head node's data, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	n = 0;
	temp = *head;

	if (*head != NULL)
	{
		n = temp->n;
		temp = temp->next;
		*head = temp;
	}
	return (n);
}
