#include "main.h"
/**
 **leet - function that encodes a string into 1337
 *Return: s
 *@s: pointer
 */
char *leet(char *s)
{
	int i;
	int j;
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
