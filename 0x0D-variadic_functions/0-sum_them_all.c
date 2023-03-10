#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *Return: sum
 *@n: number of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, vl;
	va_list pmt;

	va_start(pmt, n);

	for (i = 0; i < n; i++)
	{
		vl = va_arg(pmt, int);
		sum += vl;
	}
	va_end(pmt);
	return (sum);
}
