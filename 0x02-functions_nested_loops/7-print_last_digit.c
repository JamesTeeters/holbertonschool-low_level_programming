#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @i: = last digit of input
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + 48);
	return (i);
}
