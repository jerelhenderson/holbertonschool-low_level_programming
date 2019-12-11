#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 *
 * @head: head pointer
 * @n: given data
 * Return: Address of new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
