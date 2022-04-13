#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print a struct dog
 * @d: pointer to variable of type struct dog
 */

void print_dog(struct dog *d)
{

if (d == NULL)
{
return;
}

if (d->name == NULL)
{
printf("Name: (nil)\n");
printf("%f\n", d->age);
printf("%s\n", d->owner);
}

else
{
printf("%s\n", d->name);
printf("%f\n", d->age);
printf("%s\n", d->owner);
}

}
