#include "main.h"

/**
 * puts2 - check code
 *
 * @str: interger input
 *
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if (str[p] % 2 == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar('\n');
}
