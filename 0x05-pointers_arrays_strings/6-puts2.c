#include "main.h"

/**
 * puts2 - check code
 *
 * @str: interger input
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar('\n');
}
