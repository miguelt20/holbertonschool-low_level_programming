#include "main.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers
 *Return: arr
 *@min: min
 *@max: max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, sz;

	if (min > max)
		return (NULL);

	sz = (max - min) + 1;

	arr = malloc(sizeof(*arr) * (sz));
	if (!arr)
		return (NULL);

	for (i = 0; i < sz && min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
