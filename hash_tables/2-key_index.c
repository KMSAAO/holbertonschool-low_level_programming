#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * key_index - function gives you the index of a key
 * @key: is the key
 * @size: size of the array
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
