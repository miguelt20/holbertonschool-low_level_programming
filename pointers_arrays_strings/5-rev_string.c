#include "main.h"
/**
 *rev_string - it reverses a string
 *Return: 0
 *@s: the pointer
 */

void rev_string(char *s)
{
	char c;
	int i, j, x;

	j = 0;
	x = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	x = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[x];
		s[x--] = c;
	}
}
