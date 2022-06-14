#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	i = 0;
	while (i < argc)
		i++;
	i = i - 1;
	printf("%d\n", i);
	return (0);
}
