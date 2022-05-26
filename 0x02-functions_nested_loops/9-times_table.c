#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int c;
	int r;
	int p;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			while (c == 0)
			{
				_putchar(48);
				c++;
			}
			p = r * c;

			if (p < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(p + 48);
			}
			if (p > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(p / 10 + 48);
				_putchar(p % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
