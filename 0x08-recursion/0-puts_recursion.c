#include "main.h"

/**
 * _puts_recursion - create puts function
 * @s: input string
 *
 */
void _puts_recursion(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
