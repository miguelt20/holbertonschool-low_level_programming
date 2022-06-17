#include "main.h"
/**
 * print_alphabet_x10 - it prints the alphabet 10 times.
 *Return: 0
 */
void print_alphabet_x10(void)
{
int a = 97;
int nl = 0;
while (nl <= 10)
{
for (a = 97; a <= 122 ; a++)
{
_putchar(a);
}
nl++;
_putchar('\n');
}
}
