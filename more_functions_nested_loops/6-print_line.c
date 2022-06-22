#include "main.h"
/**
 *print_line - it prints underscore due to n
 *Return: 0
 *@n: variable
 */

void print_line(int n)
{
	char gb = 95;

	if (n < 0)
	{
		for (gb = '0'; gb <= n; gb++)
		{
			_putchar(gb + '0');
		}
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
