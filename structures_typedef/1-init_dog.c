#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - entry point
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
