#include "main.h"
/**
 *times_table - it prints the 9 time table
 *Return: 0
 */

void times_table(void)
{

	int d, a, m;

	for (a = 0; a <= 9; a++)
	{

		for (d = 0; d <= 9; d++)
		{
			m = d * a;

			if (m < 10 && d > 0)
			{
				_putchar(' ');
			}

			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(m + '0');
			}

			if (d < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
