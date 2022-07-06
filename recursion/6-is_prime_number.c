#include "main.h"
int a_prime(int n, int i);
/**
 *is_prime_number - it calculates if a number is prime
 *@n: variable
 *Return: 1 if a number is prime
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (a_prime(2, n));
}

/**
 *a_prime - it calculates recursively if a number is prime
 *@n: variable
 *@i: variable
 *Return: 1 if the number is prime
 */
int a_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else
	{
		return (a_prime(i + 1, n));
	}
}
