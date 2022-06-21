#include "main.h"
/**
 *print_most_numbers - it prints numbers
 *Return: 0
 *
 */
void print_most_numbers(void)
{
	int nmb;

	for (nmb = '0'; nmb <= '9'; nmb++)
	{

		if (nmb != '2' && nmb != '4')
		{
			_putchar(nmb);
		}

	}
	_putchar('\n');

}
