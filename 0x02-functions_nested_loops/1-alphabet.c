#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry Point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
