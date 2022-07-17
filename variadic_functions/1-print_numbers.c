#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *Return: parameters
 *@separator: symbol to separate
 *@n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int vl;
	va_list pmt;

	if (separator == NULL)
		separator = "";

	va_start(pmt, n);
	for (i = 0; i < n; i++)
	{
		vl = va_arg(pmt, int);
		printf("%d", vl);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pmt);
}
