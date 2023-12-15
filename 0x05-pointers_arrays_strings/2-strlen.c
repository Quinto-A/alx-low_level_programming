#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: pointer to the string whose length is being determined
 * Return: length of the string
 */

int _strlen(char *s)
{
	int lrn = 0;

	while (s[lrn] != '\0')
		lrn++;

	return (lrn);
}
