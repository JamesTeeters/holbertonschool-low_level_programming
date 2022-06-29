#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings -  a function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			separator = "";

		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
