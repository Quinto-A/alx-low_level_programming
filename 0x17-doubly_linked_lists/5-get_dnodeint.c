#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list.
 * @head: head of the list
 * @index: the index of the node, starting from 0.
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
