#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space allocated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int sl1 = 0;
	int sl2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		sl1++;
	for (i = 0; s2[i] != '\0'; i++)
		sl2++;

	conc = malloc(sizeof(char) * (sl1 + sl2) + 1);

	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		conc[sl1 + 1] = s2[i];

	conc[sl1 + sl2] = '\0';
	return (conc);


}
