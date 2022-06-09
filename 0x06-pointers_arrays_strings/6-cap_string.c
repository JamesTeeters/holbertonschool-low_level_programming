#include "holberton.h"

/**
 * cap_string - capilalize all words in a string
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}

		}
	}
	return (s);
}
