#include "main.h"
#include "_power.c"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 characters.
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int total = 0;

	while (b[i])
	{
		if (b == NULL)
			return (0);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			total += _power(2, strlen(b) - i - 1);
		}
		i++;
	}
	return (total);
}
