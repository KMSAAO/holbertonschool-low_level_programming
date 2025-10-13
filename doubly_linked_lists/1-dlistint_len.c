#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * dlistint_len - count the number of elements
 * @h: lists
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp->prev != NULL)
	{
		count++;
		temp = temp->prev;
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
