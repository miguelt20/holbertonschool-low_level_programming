#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 *Return: arr
 *@nmemb: number of elements
 *@size: bytes of each element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = (unsigned int *)malloc(sizeof(unsigned int) * (nmemb * size));

	if (!arr)
		return (NULL);

	while (i < nmemb)
	{
		i++;
	}
	return (arr);
}
