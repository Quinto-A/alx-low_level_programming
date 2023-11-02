#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: array size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;
	int i = 0, m = 0;

	if (nmemb == 0 || size == 0)
	return (NULL);

	m = nmemb * size;
	pntr = malloc(m);

	if (pntr == NULL)
	return (NULL);

	while (i < m)
	{
	pntr[i] = 0;
	i++;
	}

	return (pntr);
}
