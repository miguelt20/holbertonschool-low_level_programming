#include "main.h"
/**
 *print_diagonal - it print backslashes due to n
 *Return: 0
 *@n: variable
 */

void print_diagonal(int n)
{
	int bs = 92;
	int v, vs;

	if (n > 0)
	{
		for (v = 0; v <= n; v++)
		{
			for (vs = 0; vs <= v; vs++)
			{
				_putchar(' ');
			}
			_putchar(bs);
			_putchar('\n');

		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
