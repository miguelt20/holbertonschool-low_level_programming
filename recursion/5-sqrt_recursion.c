#include "main.h"
int sqrt_check(int sr, int nm);
/**
 * _sqrt_recursion - square root
 *Return: 0
 *@n: variable
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
/**
 *sqrt_check - checks the square root of nm
 *Return: sqrt of nm
 *@sr: sr
 *@nm: number
 */
int sqrt_check(int sr, int nm)
{
	if (sr * sr == nm)
	{
		return (sr);
	}
	if (sr * sr > nm)
	{
		return (-1);
	}
	return (sqrt_check(sr + 1, nm));
}
