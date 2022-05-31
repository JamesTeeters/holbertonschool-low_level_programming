#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int f;
	int s;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			f = n / 10;
			s = n % 10;
			if (n > 9)
			{
				_putchar(f + '0');
			}
			_putchar(s + '0');
		}
		_putchar('\n');
	}
}
