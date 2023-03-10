#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - it prints a number and says if it's greater and less or 0.
 *Return: 0
 */

int main(void)
{
int n, r;
int l = 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % l;
if (r > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, r);
}
else if (r == 0)
{
printf("Last digit of %d is %d and is 0\n", n, r);
}
else if (r < 6 && r != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
}
else
{
}
return (0);
}
