#include "main.h"
/**
 *_isalpha - it checks if a char is lowercase.
 *Return: 0
 *@c: it contains the variable
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
