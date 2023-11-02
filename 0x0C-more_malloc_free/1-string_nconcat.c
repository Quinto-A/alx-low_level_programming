#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s2: second string
 * @s1: first string
 * @n: bytes of s2 to be concatenated
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int sl1 = 0;
	unsigned int sl2 = 0;
	char *pntr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[sl1] != '\0')
		sl1++;
	while (s2[sl2] != '\0')
		sl2++;

	pntr = malloc(sizeof(char) * (sl1 + n) + 1);
	if (pntr == NULL)
		return (NULL);
	if (n >= sl2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			pntr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			pntr[sl1 + 1] = s2[i];
	}
		else
		{
		for (i = 0; s1[i] != '\0'; i++)
			pntr[i] = s1[i];
		for (i = 0; i < n; i++)
			pntr[sl1 + i] = s2[i];
		pntr[sl1 + i] = '\0';

		}
		return (pntr);
}
