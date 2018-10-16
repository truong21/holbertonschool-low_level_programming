#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d - pointer to struct dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
