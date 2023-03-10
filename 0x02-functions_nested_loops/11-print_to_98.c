#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - it prints numbers from n to 98.
 *Return: 0
 *@n: it contains the initial numbers.
 */
void print_to_98(int n)
{
char cm = ',';
char sp = ' ';
if (n >= 98)
{
for (; n > 98; n--)
{
printf("%d", n);
if (n > 98)
{
printf("%c", cm);
printf("%c", sp);
}
}
}
if (n <= 98)
{
for (; n  <= 98; n++)
{
printf("%d", n);
if (n < 98)
{
printf("%c", cm);
printf("%c", sp);
}
}
}
printf("\n");
}
