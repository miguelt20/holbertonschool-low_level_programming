#include "search_algos.h"
/**
 *linear_search - it searches for a value in an array of integers
 *@array: array
 *@size: size of the array
 *@value: value to search
 *Return: the value or -1 in failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
