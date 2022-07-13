#include "main.h"
/*
 * _power - returns the "a" to the power of "b"
 * @a: number to be raised to power of "b".
 * @b: power int "a" is raised to.
 *
 * Return: value of a^b.
 */
int _power(int a, int b)
{
	int i, value = a;
	
	if (b == 0)
	       return (1);	
	for (i = 1; i < b; i++)
		value = value * a;
	return (value);
}
