#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct formats - formats
 *@ft: arguments
 *@f: pointer to function
 */
typedef struct formats
{
	char ft;
	void (*f)(va_list pmt);
} fmt;

void c_fun(va_list pmt);
void i_fun(va_list pmt);
void f_fun(va_list pmt);
void s_fun(va_list pmt);

#endif
