#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog; NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
