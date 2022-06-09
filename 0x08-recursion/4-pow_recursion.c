#include "main.h"

/**
 * _pow_recursion - raise x to the power of y
 * @x: number to be raised by y
 * @y: the power x is being raised to
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y < 0)
		return (-1);
	return (1);
}
