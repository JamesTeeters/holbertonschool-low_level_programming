#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
