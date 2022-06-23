#include "main.h"
/**
 *print_triangle - it prints a triangle
 *Return: 0
 *@size: number variable
 */

void print_triangle(int size)
{
	int ln, blnk;
	char sp = 32;
	char hash = 35;

	if (size > 0)
	{
		for (ln = 1; ln <= size; ln++)
		{
			for (blnk = size - ln; blnk > 0; blnk--)
			{
				_putchar(sp);
			}
			for (blnk = 0; blnk < ln; blnk++)
			{
				_putchar(hash);
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
