#include "lists.h"

/**
 * dlistint_len - return number of elements in list
 *
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t count;

  count = 0;

  if (h == NULL)
    return (0);

  while (h != NULL)
    {
      h = h->next;
      count++;
    }
  return (count);
}
