#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: parameter size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	char *pntr;

	pntr = malloc(b);

	if (pntr == NULL)
		exit(98);
	else
		return (pntr);

}
