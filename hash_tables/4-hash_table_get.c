#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table
 * @key: is the key you are looking for
 * Return: the value associated with the element or NULL if key not exisest
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *value;

	if (!ht || *key == '\0')
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	value = ht->array[i];
	if (ht->array[i] != NULL)
	{
		return (value->value);
	}

	return (NULL);
}
