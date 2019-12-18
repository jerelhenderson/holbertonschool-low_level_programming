#include "lists.h"

/**
 * sum_dlistint - sums data in list
 *
 * @head: head pointer
 * Return: all data sum, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
