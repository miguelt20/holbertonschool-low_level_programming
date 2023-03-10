#include "main.h"
#include <stdlib.h>
/**
 **str_concat - concatenates two strings
 *Return: array
 *@s1: first string
 *@s2: second string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int x = 0, z = 0;
	char *array = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	array = malloc(sizeof(char) * (i + j + 1));

	if (!array)
		return (NULL);

	while (s1[x])
	{
		array[z++] = s1[x];
		x++;
	}
	x = 0;
	while (s2[x])
	{
		array[z++] = s2[x];
		x++;
	}
	return (array);
	free(array);
}
