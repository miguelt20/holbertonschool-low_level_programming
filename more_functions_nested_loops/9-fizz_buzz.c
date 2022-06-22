#include <stdio.h>
/**
 *main - it prints FizzBuzz
 *Return: 0
 *@n: variable
 */
int main(void)
{
	int n;
	char sp = ' ';

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf("%c", sp);
		}
	}

	printf("\n");
	return (0);
}
