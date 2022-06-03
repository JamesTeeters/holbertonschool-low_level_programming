#include "main.h"

/**
 *_strlen - return length of string
 *
 * @s: interger input
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
		n++;

	return (n);
}
