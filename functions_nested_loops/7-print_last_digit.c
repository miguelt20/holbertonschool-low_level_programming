#include "main.h"
/**
 *print_last_digit - it prints the last digit of a number
 *Return: 0
 *@x: it contains the number
 */

int print_last_digit(int x)
{
	int z;

	if (x < 0)
	{
		z = -1 * (x % 10);
	}
	else
	{
		z = x % 10;
	}
	_putchar((z % 10) + '0');
	return (z % 10);

}
