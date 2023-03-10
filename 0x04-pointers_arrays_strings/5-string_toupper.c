#include "main.h"
/**
 **string_toupper - function that changes lowercase letters to uppercase
 *Return: 0
 *@s: pointer
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
