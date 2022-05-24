#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: = input variable
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
	_putchar(48);
	return (0);

}
