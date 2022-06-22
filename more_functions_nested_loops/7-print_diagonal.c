#include "main.h"
/**
 *print_diagonal - it print backslashes due to n
 *Return: 0
 *@n: variable
 */

void print_diagonal(int n)
{
	int bs = 92;
	int v;

	if (n > 0)
	{
		for (v = 1; v <= n; v++)
		{
			_putchar(bs);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
