#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - create a dog
 * @d: the dog struct
 * Return: dog
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
