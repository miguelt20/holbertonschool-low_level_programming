#include "main.h"
/**
 *_islower - it checks if a char is lowercase.
 *Return: 0
 *@c: it contains the variable
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
