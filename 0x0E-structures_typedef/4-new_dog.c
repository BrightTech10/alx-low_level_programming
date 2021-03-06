#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creats new dog object
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 * Return: returns new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!new->name)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!new->owner)
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;


	return (new);
}
