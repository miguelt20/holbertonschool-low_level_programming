#include "main.h"
/**
 *print_square - it prints squares due to size
 *Return: 0
 *@size: number
 */
void print_square(int size)
{
	int sq = 35;
	int ls, l;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (ls = 1; ls <= size; ls++)
			{
				_putchar(sq);
			}
			_putchar('\n');
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
