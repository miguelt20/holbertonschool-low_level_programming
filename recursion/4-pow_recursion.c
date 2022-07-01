#include "main.h"
/**
 *_pow_recursion - the value of x raised to the power of y.
 *Return: the the result of the number raised to another
 *@x: number
 *@y: number 2
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
}
