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
	unsigned int i = 0, j = 0;

	while (*(accept + i))
	{
		while (*(s + j))
		{
			if (*(accept + i) == *(s + j))
			{
				break;	
			}
			i++;
		}
		if (!*(s + j))
		{
			return (j);
		}
		j++;
	}
	return (j);
}
