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
	int i;

	while (*s++)
	
	{
		for (i = 0; accept[i] != '\0'; i++)	
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
