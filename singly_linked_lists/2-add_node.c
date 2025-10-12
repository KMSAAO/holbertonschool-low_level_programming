#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node
 * @head: adderss of the new element
 * @str: string
 * Return: the address of the new elment
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	else if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = i;
	*head = new_node;
	return (new_node);
}
