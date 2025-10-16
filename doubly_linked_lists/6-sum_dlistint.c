#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_dlistint - sum all of the data of the list
 * @head: the list
 * Return: 0 if the is empty, retrun the sum of all data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		head = head->next;
		i = head->n + i;
	}

	return (i);

}
