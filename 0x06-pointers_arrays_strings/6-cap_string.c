#include "holberton.h"

/**
 * cap_string - capilalize all words in a string
 *
 */
char *cap_string(char *s)
{
	int i;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] <= 'a' && s[i + 1] <= 'z')
				{
					s[i] -= 32;
				}
		}
		i++;
	}
	return (s);
}
