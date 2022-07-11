#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - allocates memory using malloc
 *Return: 0
 *@b: bytes
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b * sizeof(void *));

	if (!p)
	{
		exit(98);
	}
	return (p);
}
