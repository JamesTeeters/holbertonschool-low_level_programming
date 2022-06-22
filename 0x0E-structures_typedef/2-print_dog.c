#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print info about dog
 * @d: structure of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age != d->age)
		printf("(nil)\n");
	else
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("owner: %s\n", d->owner);

}

