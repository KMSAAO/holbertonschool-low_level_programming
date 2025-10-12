#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - printig from end
 * @head: lists
 * @str: string want to duplicated
 * Return: the new lists
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	list_t *temp = *head;

	if (str == NULL || head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
