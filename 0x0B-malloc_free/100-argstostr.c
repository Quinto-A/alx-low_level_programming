#include "main.h"

/**
 * argstostr - concatenates all program functions
 * @ac: count of args
 * @av: vector of arguments
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, k = 0;
	char *output;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			k++;
	}
	k += ac;
	output = malloc(sizeof(char) * k + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		output[r] = av[i][n];
		r++;
	}
	if (output[r] == '\0')
	{
		output[r++] = '\n';
	}
	}
	return (output);
}
