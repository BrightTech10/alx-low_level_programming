#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize variables
 * of user-defined data type (struct dog)
 *
 * @d: pointer to variable my_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name; /* Initialize name of dog */
d->age = age; /* Initialize age of dog */
d->owner = owner; /* Initialize owner of dog */
}
