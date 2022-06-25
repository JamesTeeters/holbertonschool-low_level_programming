#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb *  size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
