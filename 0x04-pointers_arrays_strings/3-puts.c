#include "main.h"
/**
 *_puts - it prints a string, followed by a new line
 *Return: 0
 *@str: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ;   ; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
