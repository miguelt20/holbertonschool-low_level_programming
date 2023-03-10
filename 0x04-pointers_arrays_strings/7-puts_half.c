#include "main.h"
/**
 *puts_half - it prints the half of a string
 *Return: the half of a string
 *@str: array
 */
void puts_half(char *str)
{
	int i = 0;
	int sz = 0;
	int n;

	while (str[i++])
	{
		sz++;
	}
	if ((sz % 2) == 0)
	{
		n = sz / 2;
	}
	else
	{
		n = (sz + 1) / 2;
	}
	for (i = n; i < sz; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
