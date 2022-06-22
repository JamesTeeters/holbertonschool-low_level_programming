#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d);
}
