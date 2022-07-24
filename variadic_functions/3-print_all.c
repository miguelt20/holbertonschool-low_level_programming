#include "variadic_functions.h"
void c_fun(va_list pmt);
void i_fun(va_list pmt);
void f_fun(va_list pmt);
void s_fun(va_list pmt);
/**
 *print_all - it prints anything
 *@format: format
 *
 */
void print_all(const char * const format, ...)
{
	fmt checker[] = {
		{'c', c_fun},
		{'i', i_fun},
		{'f', f_fun},
		{'s', s_fun},
	};

	int i, j;
	char *comma = "";
	va_list pmt;

	va_start(pmt, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (checker[j].ft == format[i])
			{
				printf("%s", comma);
				checker[j].f(pmt);
				comma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pmt);
}
/**
 *c_fun - it prints a character
 *@pmt: argument
 */
void c_fun(va_list pmt)
{
	printf("%c", va_arg(pmt, int));
}

/**
 *i_fun - it prints an integer
 *@pmt: argument
 */
void i_fun(va_list pmt)
{
	printf("%d", va_arg(pmt, int));
}

/**
 *f_fun - it prints a float number
 *@pmt: argument
 */
void f_fun(va_list pmt)
{
	printf("%f", va_arg(pmt, double));
}

/**
 *s_fun - it prints a string
 *@pmt: argument
 */
void s_fun(va_list pmt)
{
	char *pmts = va_arg(pmt, char*);

	if (!pmts)
		pmts = "(nil)";

	printf("%s", pmts);
}
