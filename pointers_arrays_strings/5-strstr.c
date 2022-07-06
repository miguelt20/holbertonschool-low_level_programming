#include "main.h"
/**
 **_strstr - function that locates a substring
 *Return: haystack
 *@haystack: pointer to a string
 *@needle: string to locate
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
