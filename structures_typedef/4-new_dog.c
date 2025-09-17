#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *n;

	n = malloc(sizeof(dog_t));

	if (n == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

	for (j = 0; owner[j] != '\0'; j++)
		;


	n->age = age;
	n->name = malloc(i + 1);
	n->owner = malloc(j + 1);

	if (n->name == NULL)
	{
		free(n->name);
		free(n);
		return (NULL);
	}

	if (n->owner == NULL)
	{
		free(n->owner);
		free(n);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n->name[i] = name[i];

	for (j = 0; owner[j] != '\0'; j++)
		n->owner[j] = owner[j];

	return (n);
}

