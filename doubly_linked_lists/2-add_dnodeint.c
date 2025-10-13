#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add a new node at beginning of the list
 * @head: lists
 * @n: number
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (0);
	}
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;

	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
