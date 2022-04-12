#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function to initialize a variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
