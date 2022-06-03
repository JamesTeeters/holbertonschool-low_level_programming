#include "main.h"

/**
 * _puts - check code
 *
 * @str: interger input
 *
 */
void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
