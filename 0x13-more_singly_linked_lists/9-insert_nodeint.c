#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - inserts node
 * @head: poiiter
 * @idx: index
 * @n: data
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *temp, *p;
	unsigned int node = 0;
	listint_t *h = p = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (h)
	{
		node++;
		h = h->next;
	}
	if (idx >= node)
		return (NULL);

	while (i < idx)
	{
		temp = p;
		p = p->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

