#include "holberton.h"

/**
 * string_toupper - change all lowercase letters to upper case.
 *@s: input string
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*if (s[i] >= 'A' && s[i] <= 'Z')
			return (s);*/
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
