#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end - adds a new node at the end of a linked list
 *@head: the pointer to the first node
 *@str: string to put in the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	new->len = len;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = new;
	return (new);
}
