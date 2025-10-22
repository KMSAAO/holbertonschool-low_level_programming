#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * table->size);

	if (table == NULL)
	{
		return (NULL);
	}
	else if (table->array == NULL)
	{
		return (NULL);
	}
		return (table);
}
