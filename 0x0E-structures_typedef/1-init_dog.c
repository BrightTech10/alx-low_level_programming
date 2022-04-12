#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function to initialize a variable
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: exit function if d is NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
