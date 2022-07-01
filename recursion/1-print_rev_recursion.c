#include "main.h"
/**
 *_print_rev_recursion - priting a string in reverse
 *Return: string
 *@s: pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
