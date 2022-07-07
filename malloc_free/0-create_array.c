#include "main.h"
#include <stdlib.h>
/**
 **create_array - function that creates an array of chars
 *Return: array or NULL
 *@size: size of the array
 *@c: specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(size * sizeof(char));


	if (array == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
	free(array);
}
