#include "lists.h"

/**
 * pop_listint - deletes the head of the list
 * @head: lists whose head is to be deleted
 * Return: the value at the deleted head
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr;

	if (!*head || !head)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	(*head) = ptr;

	return (num);

}
