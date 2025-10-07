#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - will prints all the elements of list_t list
 * @h: const
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
		temp = temp->next;
	}

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
