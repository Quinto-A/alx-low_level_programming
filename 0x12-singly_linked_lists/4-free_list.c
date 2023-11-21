#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the linked list
 * @head: address of the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
