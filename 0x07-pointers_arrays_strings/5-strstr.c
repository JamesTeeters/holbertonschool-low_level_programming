#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: input string
 * @needle: substring
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	 const char *n, *h;

	n = needle;
	if (*n == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *n)
		{
			continue;
		}
		h = haystack;
		while (1)
		{
			if (*n == '\0')
			{
				return (haystack);
			}
			if (*h++ != *n++)
			{
				break;
			}
		}
		n = needle;
	 }
	 return ('\0');
}
