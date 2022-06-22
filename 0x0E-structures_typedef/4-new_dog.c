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
	char *n;
	char *o;
	dog_t *ptr;

	if (name == NULL)
		return (NULL);
	if (age != age)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	n = malloc(sizeof(name));
	if (n == NULL)
	{
		return (NULL);
		free(n);
	}
	o = malloc(sizeof(owner));
	if (o == NULL)
	{
		return (NULL);
		free(o);
		free(n);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
		free(n);
		free(o);
	}
	strcpy(n, name);
	strcpy(o, owner);
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;
	return (ptr);
}
