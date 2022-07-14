#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: input number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int cp;
	int len = 0;

	cp = n;

	while ((cp >>= 1) > 0)
		len++;

	while (len >= 0)
	{
		if ((n >> len--) & 1)
			_putchar('1');
		else 
			_putchar('0');
	}
}
