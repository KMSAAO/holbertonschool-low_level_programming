#include "lists.h"
/**
 * list_len - total of number of elements
 * @h: struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int total = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		total++;
	}
	return (total);
}
