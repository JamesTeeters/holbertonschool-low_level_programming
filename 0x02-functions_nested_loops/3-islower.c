#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
