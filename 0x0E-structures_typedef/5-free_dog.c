#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}