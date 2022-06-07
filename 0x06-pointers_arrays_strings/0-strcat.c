#include "holberton.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: first string
 * @src: second string
 *
 * Return: concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;
	while ( dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
