#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - allocates memory using malloc
 *Return: 0
 *@b: bytes
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b * sizeof(int *));

	if (!p)
	{
		exit(98);
	}
	return (p);
}
