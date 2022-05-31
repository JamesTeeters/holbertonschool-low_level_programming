#include "main.h"
#include <stdio.h>

/**
 * print square - print a x by x square wherr x is input
 * @size: size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int row;
	int colomn;
	if (size >= 0)
	{
		for (colomn = 0; colomn < size; colomn++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
