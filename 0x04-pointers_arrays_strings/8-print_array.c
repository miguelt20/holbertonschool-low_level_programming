#include "main.h"
#include <stdio.h>
/**
 *print_array - it prints the elemnts of an array
 *Return: 0
 *@a: pointer
 *@n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");

		}
	}
	printf("\n");
}
