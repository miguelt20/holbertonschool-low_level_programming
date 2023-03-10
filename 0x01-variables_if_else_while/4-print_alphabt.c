#include <stdio.h>
/**
 *main - it prints the alphabet in lowercase without a letter.
 *Return: 0
 */
int main(void)
{
char alp;
alp = 'a';
while (alp <= 'z')
{
if (alp != 'e' && alp != 'q')
{
putchar(alp);
}
alp++;
}
putchar('\n');
return (0);
}
