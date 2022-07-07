#include <stdio.h>
/**
 *main - prints the number of arguments passed into it
 *Return: 0
 *@argc: number of argv
 *@argv: arrays
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i = 0;

	if (argc == 0)
	{
		printf("%d\n", i);
	}
	else
	{
		 printf("%d\n", argc - 1);
	}
	return (0);
}
