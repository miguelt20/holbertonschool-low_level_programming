#include "main.h"
/**
 * _sqrt_recursion - square root
 *Return: 0
 *@n: variable
 *
 */
int _sqrt_recursion(int n)
{
	int temp = 0, rs;

	rs = n / 2;

	if (n < 0)
	{
		return (-1);
	}
	if (rs != temp)
	{
		temp = rs;
		rs = (n / temp + temp) / 2;
	}
	return (rs);
}
