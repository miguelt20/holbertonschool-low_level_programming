#include "main.h"
#include <stdlib.h>
/**
 ***alloc_grid - returns a pointer to a 2 dimensional array of integers
 *Return: x
 *@width: x-axis size
 *@height: y-axis size
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(x[j]);
			}
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
