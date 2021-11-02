#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - main fonction
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int new_dog_name, new_owner, i;
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->age = age;
	for (new_dog_name = 0; *(name + new_dog_name); new_dog_name++)
		;
	for (new_owner = 0; *(owner + new_owner); new_owner++)
		;
	new_dog->name = malloc(new_dog_name * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(new_owner * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= new_dog_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= new_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
