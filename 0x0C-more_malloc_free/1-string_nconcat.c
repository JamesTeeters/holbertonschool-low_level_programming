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
	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if ((int) n <= len2)
		len2 = n;
	
	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[i + len1] = s2[i];
	ptr[len1 + len2] = '\0';
	return (ptr);
}
