#include "main.h"
/**
 * puts2 - it prints every other character of a string
 *Return: 0
 *@str: the pointer
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
