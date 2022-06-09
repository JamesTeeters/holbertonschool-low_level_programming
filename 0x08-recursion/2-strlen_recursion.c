#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: input string
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s)
	{

		i += _strlen_recursion(s + 1);
		return (i);
	}
	return (0);
}
