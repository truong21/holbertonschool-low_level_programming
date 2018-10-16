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
	struct dog *new_dog;
	char *temp_name, *temp_owner;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	temp_name = _strdup(name);
	if (temp_name == NULL)
		return (NULL);
	temp_owner = _strdup(owner);
	if (temp_owner == NULL)
		return (NULL);
	new_dog->name = temp_name;
	new_dog->age = age;
	new_dog->owner = temp_owner;
	return (new_dog);
}
/**
 * _strdup - returns a pointer to a copy string
 * @str: string
 * Return: pointer to the stored string; NUll otherwise
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dup_str = malloc((sizeof(char) * i) + 1);
	if (dup_str == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dup_str[j] = str[j];

	return (dup_str);
}
