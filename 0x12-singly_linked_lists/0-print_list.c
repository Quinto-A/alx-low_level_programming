#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the string head node
 * Return: number of nodes print
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
		h = h->next;
		s++;
	
	}
	if (h)
	{
		printf("\n");
	}
	return (s);
}
