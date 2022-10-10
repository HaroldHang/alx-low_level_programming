#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initialise a dog
 * @d: the struct of dog
 * @name: the name of dog
 * @age: the age
 * @owner: the owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
