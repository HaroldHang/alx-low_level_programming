#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a dog
 * @d: the struct of dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name="(nil)";

if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner)
}
