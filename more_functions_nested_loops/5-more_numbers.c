#include "main.h"
/**
 *more_numbers- it prints numbers from 1 to 14
 *Return: 0
 */
void more_numbers(void)
{
	int ln, i;
	int nm [15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	for (ln = '0'; ln <= '9'; ln++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (nm[i] > 9 && nm[i] <= 14)
			{
				_putchar(nm[i] / 10 + '0');
			}
			_putchar(nm[i] % 10 + '0');
		}

	_putchar('\n');
	}
}
