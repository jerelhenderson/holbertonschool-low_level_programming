#include "lists.h"

/**
 * sum_listint - sums data in list
 *
 * @head: pointer to head
 * Return: all data sum, or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
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
