#include <stdio.h>
#include <stdlib.h>
/**
 *main -  program that multiplies two numbers
 *Return: 0
 *@argc: number of argv
 *@argv: arrays
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
