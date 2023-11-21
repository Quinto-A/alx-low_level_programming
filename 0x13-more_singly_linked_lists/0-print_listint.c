#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - printselements of the list
 * @h: pointer to the list whose elements are to be printed
 * Return: the number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
			count++;
			h = h->next;
	}
	return (count);
}
