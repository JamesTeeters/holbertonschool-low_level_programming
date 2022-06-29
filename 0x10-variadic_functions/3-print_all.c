#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	vprintf(stderr, format, args);

	va_end(args);
}
