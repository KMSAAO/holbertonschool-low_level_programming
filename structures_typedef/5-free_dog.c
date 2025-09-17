#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: ptr
 * Return: nothing
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
		exit(0);
	free(d->name);
	free(d->owner);
	free(d);
}
