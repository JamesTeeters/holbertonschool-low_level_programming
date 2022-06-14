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
	int x, y, sum;

	sum = 0;
	if (argc <= 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
