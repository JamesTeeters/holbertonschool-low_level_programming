#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line in term
 * @n: how long the line will be
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d;
	int s;

	if (n >= 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
