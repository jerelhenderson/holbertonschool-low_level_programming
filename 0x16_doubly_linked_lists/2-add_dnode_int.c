#include "lists.h"

/**
 * add_dnodeint - adds new node beginning of list
 *
 * @head: pointer to head of nodes
 * @n: given data
 * Return: address of new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
  new->prev = NULL;

  if (*head == NULL)
    {
      new->next = NULL;
      *head = new;
      return (new);
    }

  new->next = *head;
  temp->prev = new;
  *head = new;

  return (new);
}
