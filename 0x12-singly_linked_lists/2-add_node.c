#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of the linked list
 * @head: head of the first node
 * @str: node to be added
 * Return: the address to the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
