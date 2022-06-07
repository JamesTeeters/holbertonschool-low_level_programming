#include "holberton.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: less than greater than or equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
