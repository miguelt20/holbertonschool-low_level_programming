#include "main.h"
/**
 **_strpbrk - function that searches a string for any of a set of bytes
 *Return: s
 *@s: pointer
 *@accept: char to locate
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j])
		{
			return (s + i);
		}
	}

	return (0);
}
