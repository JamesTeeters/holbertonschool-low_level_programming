#include "main.h"

/**
 * _strchr - locate first occurrences of given char
 *
 * @s: input string
 * @c: character to be found
 * Return: given char or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
		if (*s == c)
			return (s);
	return ('\0');
}
