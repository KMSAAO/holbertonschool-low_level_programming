#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - frees list
 * *head: the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	while (head != NULL)
	{
		temp = head->prev;
		free(head);
		head = temp;
	}
}
