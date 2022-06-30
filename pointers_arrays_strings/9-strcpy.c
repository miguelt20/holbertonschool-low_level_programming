#include "main.h"
/**
 *_strcpy - it copies the content into a pointer
 *Return: 0
 *@dest: pointer
 *@src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);

}
