#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two stings using malloc
 * @s1: first input stirng
 * @s2: second input string
 *
 * Return: pointer of concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len, i, clen;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	for (len = 0; s1[len] || s2[len]; len++)
		i++;

	ptr = (char *)malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);

	clen = 0;
	for (len = 0; s1[len]; len++)
		ptr[clen++] = s1[len];
	for (len = 0; s2[len]; len++)
		ptr[clen++] = s2[len];

	return (ptr);
}
