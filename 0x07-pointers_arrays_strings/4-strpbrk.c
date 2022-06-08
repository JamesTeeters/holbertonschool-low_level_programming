#include "main.h"

/**
 * _strpbrk - search for characters of given byte size
 *
 * @s: input string
 * @accept: character of given byte size
 * Return: characters of given bytes or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j:
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					return (s);
				}
			}
		}
	return ('\0');
}
