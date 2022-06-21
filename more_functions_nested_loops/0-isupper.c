#include "main.h"
/**
 *_isupper - it checks if a character is uppercase
 *Return: 0
 *@c: variale
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
