#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index at which the new node should be added
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
			return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;
	while (curr != NULL && i < idx)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	if (curr == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = curr->prev;
	new_node->next = curr;
	if (curr->prev != NULL)
		curr->prev->next = new_node;
	curr->prev = new_node;
	return (new_node);
}
