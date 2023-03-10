#include "main.h"
/**
 *_strlen - it shows the length of the array
 *Return: 0
 *@s: this is the pointer
 */
int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
