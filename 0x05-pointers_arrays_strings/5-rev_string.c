#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: interger input
 *
 */
void rev_string(char *s)
{
	int p;
	int x;
	char tmp;

	while (s[p] != '\0')
	{
		p++;
	}
	p = p - 1;
	for (x = 0; x <= p; x++)
	{
		p--;
		tmp = s[p];
		s[p] = s[x];
		s[x] = tmp;
	}
	*s = s[x];

}
