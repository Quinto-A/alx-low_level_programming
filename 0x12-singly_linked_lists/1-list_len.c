#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the length of elements
 * @h: pointer to head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
	m++;
	h = h->next;
	}
	return (m);
}
