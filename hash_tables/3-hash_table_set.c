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
	unsigned long int ke;
	hash_node_t *tem, *new_node;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	ke = key_index((const unsigned char *)key, ht->size);
	tem = ht->array[ke];

	while (tem != NULL)
	{
		if (strcmp(tem->key, key) == 0)
		{
		free(tem->value);
		tem->value = strdup(value);
		return (1);
		}
		tem = tem->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[ke];
	ht->array[ke] = new_node;

	return (1);
}
