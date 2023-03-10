#include "main.h"
/**
 *print_line - it prints underscore due to n
 *Return: 0
 *@n: variable
 */

void print_line(int n)
{
	int gb = 95;
	int v;

	if (n > 0)
	{
		for (v = 1; v <= n; v++)
		{
			_putchar(gb);
		}
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}
