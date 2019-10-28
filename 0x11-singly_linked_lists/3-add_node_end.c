#include "lists.h"


/**
 * add_node_end - add node to head of list
 *
 * @head: beginning of list
 * @str: duplicated string
 * Return: address of node, or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t len;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = 0;

	while (str[len] != '\0')
	        len++;

	temp = *head;

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
