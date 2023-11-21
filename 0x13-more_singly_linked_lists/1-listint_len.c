#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: linked list pointer
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}

	return (count);
}
