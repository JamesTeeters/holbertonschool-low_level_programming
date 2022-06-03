#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: interger input
 *
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	p = p - 1;
	while (p >= 0)
	{
		_putchar(s[p]);
			--p;
	}
	_putchar('\n');
}
