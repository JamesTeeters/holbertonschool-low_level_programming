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

	for (r = '0'; r < 10; r++)
	{
		for (c = '0'; c < 10; c++)
		{
			_putchar(c + 48);
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		p = r * c;

		_putchar(10);
		if (p < 10)
		{
			_putchar(p + 48);
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		else
		{
			_putchar(p / 10 + 48);
			_putchar(p % 10 + 48);
			_putchar(44);
			_putchar(32);
		}
	}
}
