#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - free list_t
 * @head: the list
 * Return: head
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
