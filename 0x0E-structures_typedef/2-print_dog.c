#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function to print a struct dog
 * @d: pointer to variable of type struct dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		exit(0);

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
