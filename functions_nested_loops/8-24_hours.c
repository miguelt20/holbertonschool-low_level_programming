#include "main.h"
/**
 *jack_bauer - in prints 24 hours
 *Return: 0
 *
 */

void jack_bauer(void)
{
	int hr = 0;
	int mn = 0;

	for (; hr <= 24; hr++)
	{
		for (; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}


	}

}
