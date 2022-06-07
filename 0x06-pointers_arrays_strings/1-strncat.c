#include "holberton.h"

/**
 * _strncat - concatenate again
 * @dest: fist string
 * @src: second string
 * @n: length of src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j])
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}
