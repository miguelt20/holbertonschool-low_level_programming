#include "main.h"
/**
 *_isdigit - it checks if a character is a digit
 *Return: 0
 *@c: variable
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
