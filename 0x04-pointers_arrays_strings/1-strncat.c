#include "main.h"
/**
 **_strncat - concatenates two strings with n bytes
 *Return: dest
 *@dest: pointer
 *@src: pointer
 *@n: variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
