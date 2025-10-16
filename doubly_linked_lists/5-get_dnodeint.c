#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - print the nth node
 * @head: the list
 * @index: the index of the node,(starting form 0)
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;
	unsigned int j = 0;

	if (head == NULL)
		return (0);

	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	temp = head;

	if (index > i)
		return (NULL);

	while (j != index)
	{
		temp = temp->next;
		j++;
	}
	head = temp;

	return (head);
}
