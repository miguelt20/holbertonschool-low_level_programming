#include "main.h"
/**
 *print_sign - it prints the sign and its respective return.
 *Return: 0
 * @n: it contains the number
 */

int print_sign(int n)
{

	char p = '+';
	char m = '-';

	if (n > 0)
	{
		_putchar(p);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);

	}
	else
	{
		_putchar(m);
		return (-1);

	}

}
