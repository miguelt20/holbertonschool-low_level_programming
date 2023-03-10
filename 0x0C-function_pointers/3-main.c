#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *main - receive arguments and return result
 *@argc: number of argv
 *@argv: arraysi
 *Return: result of the function
 */
int main(int argc, char *argv[])
{
	int rslt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*(get_op_func(argv[2]))) && (strlen(argv[2]) == 1))
	{
		rslt = (*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", rslt);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
