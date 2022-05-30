#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if char is a digit 0-9
 * @c: input char
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
