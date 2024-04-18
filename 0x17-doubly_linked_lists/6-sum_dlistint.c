#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of linked list
 * @head: head of the linked list
 * Return: sum of all data in the list, if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
