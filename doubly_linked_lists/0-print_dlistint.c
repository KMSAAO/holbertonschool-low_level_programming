#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of lists
 * @h: lists
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	new_node = h;
	while (new_node->prev != NULL)
	{
		printf("%d\n", new_node->n);
		count++;
		new_node = new_node->prev;
	}
	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		count++;
		new_node = new_node->next;
	}

	return (count);
}
