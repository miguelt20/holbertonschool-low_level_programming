#include "main.h"
/**
 *_strcpy - it copies the content into a pointer
 *Return: 0
 *@dest: pointer
 *@src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *x;

	x = src;
	dest = src;
	src = x;

	return (dest);

}
