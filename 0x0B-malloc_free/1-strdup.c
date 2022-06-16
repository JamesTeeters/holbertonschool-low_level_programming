#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicat a string using malloc
 * @str: input string
 *
 * Return: character pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	ptr = (char *)malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}
