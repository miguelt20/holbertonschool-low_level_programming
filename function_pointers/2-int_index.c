#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - function that searches for an integer
 *Return: the matches
 *@array: array
 *@size: size of the array
 *@cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (0);
}
