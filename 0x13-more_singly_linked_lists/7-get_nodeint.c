#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index of the node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *np, *temp, *h;
	unsigned int i, n = 0;

	temp = head;
	while (temp->next != NULL)
	{
		n++;
		temp = temp->next;
	}
	if (index < 0 || index > n)
		return (NULL);
	h = head;
	while (i <= index)
	{
		np = h;
		h = h->next;
		i++;
	}
	return (np);
}

