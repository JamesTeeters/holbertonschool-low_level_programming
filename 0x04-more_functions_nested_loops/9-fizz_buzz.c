#include "main.h"
#include <stdio.h>

/**
 * main - print Fizz, or, Buzz, or FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	int Fizz;
	int Buzz;

	for (num = 1; num <= 100; num++)
	{
		Fizz = num % 3 == 0;
		Buzz = num % 5 == 0;
		if (Fizz && Buzz)
		{
			printf("FizzBuzz ");
		}
		else if (Fizz)
		{
			printf("Fizz ");
		}
		else if (Buzz)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
