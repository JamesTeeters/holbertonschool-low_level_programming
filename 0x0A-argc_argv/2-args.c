#include "main.h"
#include <stdio.h>
#include <string.h>

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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
