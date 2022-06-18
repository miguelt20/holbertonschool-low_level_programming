#include "main.h"
/**
 *_abs - it prints the absolute value of a number.
 *Return: 0
 * @c: it contains the number
 */

int _abs(int c)
{

	if (c < 0)
	{
		c = c * -1;
	}

	return (c);
}
