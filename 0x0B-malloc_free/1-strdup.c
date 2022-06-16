#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer of a string using malloc
 * @str: input string
 *
 * Return: character pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	if (str == 0)
		return (NULL);

	len = 0;
	while (str[len])
		len++

	ptr = (char *)malloc(size of(char) * (len + 1));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}
