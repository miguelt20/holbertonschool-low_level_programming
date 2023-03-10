#include "main.h"
/**
 *swap_int - swaping the value
 *Return: 0
 *@a: 1st variable
 *@b: second variable
 */

void swap_int(int *a, int *b)
{
	int old;

	old = *b;
	*b = *a;
	*a = old;

}
