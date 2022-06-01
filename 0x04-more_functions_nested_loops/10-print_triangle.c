#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle in term
 * @size: how large the triangle will be
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int space;
	int nonspace;
	int height;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			space = size - height;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			nonspace = height;
			while (nonspace > 0)
			{
				_putchar('#');
				nonspace--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
