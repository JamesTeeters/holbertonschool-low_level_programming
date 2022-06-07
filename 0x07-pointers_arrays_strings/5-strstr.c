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
	for (;; haystack++)
		for (;; needle++)
			if (*needle == *haystack)
				return (needle);
	return ('\0');
}
