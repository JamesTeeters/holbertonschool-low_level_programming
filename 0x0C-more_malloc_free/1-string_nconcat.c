#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatnate 1 string and given bytes of second string
 * @s1: input string 1
 * @s2: input string 2
 * @n: given bytes of string 2
 *
 * Return: concatnated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, clen;
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s2);
	if (i >= n)
		i = n;

	ptr = malloc(sizeof(s1) + sizeof(i));
	if (ptr == NULL)
		return (NULL);

	for (len = 0; s1[len]; len++)
		ptr[clen++] = s1[len];
	for (len = 0; s2[len]; len++)
		ptr[clen++] = s2[len];
	return (ptr);
}
