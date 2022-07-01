#include "main.h"
/**
 *factorial - printing the factorial of a number
 *Return: 1
 *@n: variable with the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
