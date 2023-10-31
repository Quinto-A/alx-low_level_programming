#include "main.h"

/**
 * _strdup - returns a copy of a string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *pnt;
	int num;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		num++;

	pnt = malloc(sizeof(char) * num + 1);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		pnt[i] = str[i];
	return (pnt);

}
