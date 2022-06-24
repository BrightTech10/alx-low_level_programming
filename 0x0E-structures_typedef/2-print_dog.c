#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function to print a struct dog
 * @d: pointer to variable of type struct dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
