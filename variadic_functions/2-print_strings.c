#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints strings
 *Return: pmt
 *@separator: separator
 *@n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *vl;
	va_list pmt;

	if (separator == NULL)
		separator = "";

	va_start(pmt, n);
	for (i = 0; i < n; i++)
	{
		vl = va_arg(pmt, char*);

		if (vl == NULL)
			printf("nil");

		printf("%s", vl);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pmt);
}
