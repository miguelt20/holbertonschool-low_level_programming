#include <stdio.h>
/**
 *main - it prints numbers with spaces and commas.
 *Return: 0
 */
int main(void)
{
int i = 48;
int x = 44;
int z = 32;
while (i <= 57)
{
putchar(i);
if (i < 57)
{
putchar(x);
}
if (i < 57)
{
putchar(z);
}
i++;
}
putchar('\n');
return (0);
}
