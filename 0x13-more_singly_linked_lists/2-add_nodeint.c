#include "lists.h"

/**
 * add_nodeint - add a new node to the beggining of a list
 * @head: address to the first node of the list
 * @n: integer to be added
 * Return: address to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
