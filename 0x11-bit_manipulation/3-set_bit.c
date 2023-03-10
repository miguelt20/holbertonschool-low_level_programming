#include "main.h"
/**
 *set_bit - it sets the value of a bit to 1 at a given index
 *@n: number to set
 *@index: number of the bit it's wanted to set
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 32)
		return (-1);

	x = 1 << index;

	*n |= x;

	return (1);
}
