#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_dnodeint_end - add a new node at the end of the list
* @head: list
* @n: number
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (head == NULL)
		return (0);
	else if (new_node == NULL)
		return (0);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->next = NULL;
	new_node->prev = temp;
	return (new_node);
}
