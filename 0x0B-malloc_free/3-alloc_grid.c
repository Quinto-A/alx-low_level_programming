#include "main.h"

/**
 * alloc_grid - returns pointer to 2d array of ints
 * @width: width of array
 * @height: height of array
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (width <= 0; || height <= 0)
		return (NULL);

	output = malloc(sizeof(int) * width);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (i = 0; i <= height; i++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			outpu[i][j] = 0;
	}
	return (output);

}
