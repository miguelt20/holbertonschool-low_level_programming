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

	p = (void *)malloc(sizeof(b) * (b));

	if (p == NULL)
	{
		exit(98);
	}

	if (p != NULL)
	{
		return (p);
	}
	return (0);
}
