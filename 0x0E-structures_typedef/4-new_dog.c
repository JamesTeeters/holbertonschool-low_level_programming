#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *ncpy;
	char *ocpy;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	if (age != age)
		return (NULL);
	d = malloc(sizeof(dog_t));
	ncpy = malloc(sizeof(name) + 1);
	ocpy = malloc(sizeof(owner) + 1);
	if (d == NULL || ncpy == NULL || ocpy == NULL)
	{
		free(d);
		free(ncpy);
		free(ocpy);
		return (NULL);
	}
	strcpy(ncpy, name);
	strcpy(ocpy, owner);

	d->name = ncpy;
	d->age = age;
	d->owner = ocpy;

	return (d);
}
