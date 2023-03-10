#include <stdio.h>
/**
 *main - it prints the alphabet backwards.
 *Return: 0
 */
int main(void)
{
char a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
