#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - allocates memory using malloc
 *Return: 0
 *@b: bytes
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(void *) * b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
