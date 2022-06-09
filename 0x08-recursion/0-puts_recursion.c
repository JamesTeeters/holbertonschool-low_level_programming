#include "main.h"

/**
 * _puts_recursion - create puts function
 * @s: input string
 *
 */
void _puts_recursion(char *s)
{
	if (*)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
