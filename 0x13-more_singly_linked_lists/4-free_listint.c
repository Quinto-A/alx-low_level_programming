#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the pointer to the first element
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
	ptr = head->next;
	free(head);
	head = ptr;
	}


}
