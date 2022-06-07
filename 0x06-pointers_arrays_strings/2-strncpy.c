#include "holberton.h"

/**
 * _strncpy - copy one string onto another
 *
 * @dest: first string
 * @src: second string
 * @n: length of string
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
