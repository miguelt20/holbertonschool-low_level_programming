#include "main.h"
/**
 * puts2 - it prints every other character of a string
 *Return: 0
 *@str: the pointer
 */
void puts2(char *str)
{
	int i;
	int sz;

	sz = 0;

	while (str[sz] != '\0')
	{
		sz++;
	}

	for (i = 0; i < sz; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
