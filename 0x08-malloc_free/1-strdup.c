#include "main.h"
#include <stdlib.h>
/**
 **_strdup - returns a pointer which contains a copy of the string
 *Return: na
 *@str: string copied
 */
char *_strdup(char *str)
{
	char *na;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	na = malloc(sizeof(char) * (i + 1));

	if (na == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		na[j] = str[j];
		j++;
	}
	na[j] = '\0';
	return (na);
	free(na);
	free(str);
}
