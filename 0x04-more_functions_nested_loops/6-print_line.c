#include "main.h"
#include <stdio.h>

/**
 * print_line - draw a line in term
 * @n: is input for how long the line should be
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	if (n >= 0)
	{	
		for (l = 0; l <= n; l++)
		{
			_putchar (95);
		}
	}
	_putchar('\n');
}
