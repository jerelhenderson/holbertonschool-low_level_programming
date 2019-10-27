#include "lists.h"


/**
 * add_node - add node to head of list
 *
 * @head: beginning of list
 * @str: duplicated string
 * Return: address of node, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t list_len;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	list_len = 0;

	while (str[list_len] != '\0')
	        list_len++;

	new->len = list_len;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	return (*head);
}
