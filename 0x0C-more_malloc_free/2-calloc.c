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

	if (nmemb == 0 || size == 0)
	return (NULL);

	pntr = malloc(nmemb * size);

	if (pntr == NULL)
	return (NULL);
	else
	return (pntr);
}
