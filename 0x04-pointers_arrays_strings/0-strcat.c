#include "main.h"
/**
 **_strcat - concatenates two strings
 *Return: dest
 *@dest: pointer
 *@src: pointer
 */
char *_strcat(char *dest, char *src)
{
	const char *wd;
	char *hl;

	for (hl = dest; *hl != '\0'; hl++)
	{
	}
	for (wd = src; *wd != '\0'; wd++, hl++)
	{
		*hl = *wd;
	}
	*hl = '\0';
	return (dest);
}
