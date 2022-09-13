#include "search_algos.h"
/**
 *binary_search - searches for a value in a sorted array of integers
 *@array: array
 *@size: size of the array
 *@value: value to search
 *Return: the value or -1 in failure
 */
int binary_search(int *array, size_t size, int value)
{
	int val;

	if (!array)
		return (-1);

	val = binarySearch(array, 0, size - 1, value);
	return (val);
}
/**
 *binarySearch - recursive Binary Search
 *@array: array
 *@l: left element
 *@r: right element
 *@value: value to search
 *Return: the value or -1 in failure
 */
int binarySearch(int array[], int l, int r, int value)
{
	int mid;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		print_array(array + l, r + 1 - l);

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binarySearch(array, l, mid - 1, value));

		return (binarySearch(array, mid + 1, r, value));
	}
	return (-1);
}
/**
 *print_array - it prints an array
 *@array: array
 *@size: size of the array
 *Return: the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}
