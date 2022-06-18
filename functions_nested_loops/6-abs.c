#include "main.h"
/**
 *_abs - it prints the absolute value of a number.
 *Return: 0
 * @x: it contains the number
 */

int _abs(int x)
{
	int n = (x * (-1));

	if (x < 0)
	{
		_putchar(n);
	}
	else if (x >= 0)
	{
		_putchar(x);
	}
	return (0);
}
