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

	for (num = 1; num < 100; num++)
	{
		Fizz = num % 3 == 0;
		Buzz = num % 5 == 0;
		if (Fizz && Buzz)
		{
			printf("FizzBuzz\n");
		}
		else if (Fizz)
		{
			printf("Fizz\n");
		}
		else if (Buzz)
		{
			printf("Buzz\n");
		}
		else
		{
		printf("%d\n", num);
		}
	}
	return (0);
}
