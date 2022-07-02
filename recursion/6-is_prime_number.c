#include "main.h"
int a_prime(int n, int i);
/**
 *is_prime_number - it calculates if a number is prime
 *@n: variable
 *Return: 1 if a number is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (a_prime(n, n - 1));
}

/**
 *a_prime - it calculates recursively if a number is prime
 *@n: variable
 *@i: variable
 *Return: 1 if the number is prime
 */
int a_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % 1 == 0 && i > 0)
	{
		return (0);
	}
	return (a_prime(n, i - 1));
}
