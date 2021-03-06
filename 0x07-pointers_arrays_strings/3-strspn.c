#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: input string
 * @accept: characters to be accepted into prfix
 *
 * Return: sum of give accepted characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				break;
		}
		if (accept[y] == '\0')
			break;
	}
	return (x);
}
