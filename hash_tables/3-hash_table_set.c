#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - functions that adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded and 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ke = key_index((const unsigned char *) key, ht->size);
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));
	hash_node_t *temp = ht->array[ke];

	if (ht == NULL)
		return (0);
	else if (hash_node == NULL)
		return (0);
	else if (key == NULL)
		return (0);
	else if (value == NULL)
		return (0);

	if (strcmp(temp->key, key) == 0)
	{
		(free(temp->value));
		temp->value = strdup(value);
		return (1);
	}
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = ht->array[ke];
	ht->array[ke] = hash_node;

	return (1);
}
