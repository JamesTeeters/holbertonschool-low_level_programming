#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;

	while (h < 24)
	{
		m = 0;
		if (h <= 9)
		{
			_putchar('0');
			_putchar(h + '0');
		}
		if (h > 9)
		{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		}
		_putchar(58);
		h++;
		while (m < 60)
		{
			if (m <= 9)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			if (m > 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			_putchar('\n');
			m++;
		
		}
	}
}
