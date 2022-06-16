#include <stdio.h>
/**
 *main - it prints the numbers in hexadecimal.
 *Return: 0
 */
int main(void)
{
int i = 48;
char a = 'a';
while (i <= 57)
{
putchar(i);
i++;
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
