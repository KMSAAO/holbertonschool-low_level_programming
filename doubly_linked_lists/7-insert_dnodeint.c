#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the list
 * @idx: the position of the node
 * @n: the number
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i;
	unsigned int j = 0;

	
	if (*h == NULL)
		return (NULL);
	
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	temp = *h;

	if (idx > i)
		return (NULL);

	while (j != idx)
	{
		temp = temp->next;
		j++;
	}
	add_dnodeint(&temp, n);
	
	*h = temp;
	return (*h);

}